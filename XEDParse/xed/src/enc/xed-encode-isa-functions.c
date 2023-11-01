/*BEGIN_LEGAL 

Copyright (c) 2018 Intel Corporation

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
  
END_LEGAL */
/// @file xed-encode-isa-functions.c
/// 

////////////////////////////////////////////////////////////////////////////
// This file contains the public interface to the encoder. 
////////////////////////////////////////////////////////////////////////////
#include "xed-encode.h"
#include "xed-encode-private.h"
#include "xed-encode-isa-functions.h"
#include "xed-tables-extern.h"
#include "xed-operand-accessors.h"



// FIXME: I could generate these 3 functions:

static xed_bool_t 
xed_encode_nonterminal_INSTRUCTIONS(xed_encoder_request_t* r)
{
    xed_iclass_enum_t iclass;  

    // bind function sets the encoding iform index
    xed_encode_function_pointer_t bind_func;
    
    iclass = xed_encoder_request_get_iclass(r);
    bind_func = xed_encoder_get_group_encoding_function(iclass);
    if (bind_func)    {
        xed_bool_t okay = (*bind_func)(r);
        return okay;
    }
    return 0;
}

// These are called during the encoding sequence to look up the right
// encoder functions specific to an iclass.

xed_bool_t 
xed_encode_nonterminal_INSTRUCTIONS_BIND(xed_encoder_request_t* xes)
{
	/* PREFIX_ENC()::
	REP=2  ->	emit 0xf2 emit_type=numeric value=0xf2 nbits=8 	FB NO_RETURN=1 value=0x1
	REP=3  ->	emit 0xf3 emit_type=numeric value=0xf3 nbits=8 	FB NO_RETURN=1 value=0x1
	OSZ=1  ->	emit 0x66 emit_type=numeric value=0x66 nbits=8 	FB NO_RETURN=1 value=0x1
	ASZ=1  ->	emit 0x67 emit_type=numeric value=0x67 nbits=8 	FB NO_RETURN=1 value=0x1
	LOCK=1  ->	emit 0xf0 emit_type=numeric value=0xf0 nbits=8 	FB NO_RETURN=1 value=0x1
	SEG_OVD=4  ->	emit 0x64 emit_type=numeric value=0x64 nbits=8 	FB NO_RETURN=1 value=0x1
	SEG_OVD=5  ->	emit 0x65 emit_type=numeric value=0x65 nbits=8 	FB NO_RETURN=1 value=0x1
	MODE=2 HINT=3  ->	emit 0x2e emit_type=numeric value=0x2e nbits=8 	FB NO_RETURN=1 value=0x1
	MODE=2 HINT=4  ->	emit 0x3e emit_type=numeric value=0x3e nbits=8 	FB NO_RETURN=1 value=0x1
	MODE!=2 SEG_OVD=1  ->	emit 0x2e emit_type=numeric value=0x2e nbits=8 	FB NO_RETURN=1 value=0x1
	MODE!=2 HINT=3  ->	emit 0x2e emit_type=numeric value=0x2e nbits=8 	FB NO_RETURN=1 value=0x1
	MODE!=2 SEG_OVD=2  ->	emit 0x3e emit_type=numeric value=0x3e nbits=8 	FB NO_RETURN=1 value=0x1
	MODE!=2 HINT=4  ->	emit 0x3e emit_type=numeric value=0x3e nbits=8 	FB NO_RETURN=1 value=0x1
	MODE!=2 SEG_OVD=3  ->	emit 0x26 emit_type=numeric value=0x26 nbits=8 	FB NO_RETURN=1 value=0x1
	MODE!=2 SEG_OVD=6  ->	emit 0x36 emit_type=numeric value=0x36 nbits=8 	FB NO_RETURN=1 value=0x1
	*/
	xed_uint_t okay = 1;
	xed_uint_t conditions_satisfied = 0;
	xed_encoder_request_iforms(xes)->x_PREFIX_ENC = 0;
	conditions_satisfied = (xed3_operand_get_rep(xes) == 2);
	if (conditions_satisfied) {
		okay = 1;
		/* no code required for NO_RETURN binding */
		xed_encoder_request_iforms(xes)->x_PREFIX_ENC |= (1 << 1);
	}
	conditions_satisfied = (xed3_operand_get_rep(xes) == 3);
	if (conditions_satisfied) {
		okay = 1;
		/* no code required for NO_RETURN binding */
		xed_encoder_request_iforms(xes)->x_PREFIX_ENC |= (1 << 2);
	}
    return xed_encode_nonterminal_INSTRUCTIONS(xes); /*pacify the compiler*/
	(void)okay;
	(void)xes;
	(void)conditions_satisfied;
}
xed_bool_t 
xed_encode_nonterminal_INSTRUCTIONS_EMIT(xed_encoder_request_t* xes)
{   
    xed_ptrn_func_ptr_t emit_ptrn_function;
    
    emit_ptrn_function = xed_encoder_get_emit_ptrn(xes);
    (*emit_ptrn_function)(xes);
    return 1;
    //FIXME: use this in the future
    //return xed3_operand_get_error(xes);    
}


