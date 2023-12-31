/// @file xed-operand-action-enum.c

// This file was automatically generated.
// Do not edit this file.

#include <string.h>
#include <assert.h>
#include "xed-operand-action-enum.h"

typedef struct {
    const char* name;
    xed_operand_action_enum_t value;
} name_table_xed_operand_action_enum_t;
static const name_table_xed_operand_action_enum_t name_array_xed_operand_action_enum_t[] = {
{"INVALID", XED_OPERAND_ACTION_INVALID},
{"RW", XED_OPERAND_ACTION_RW},
{"R", XED_OPERAND_ACTION_R},
{"W", XED_OPERAND_ACTION_W},
{"RCW", XED_OPERAND_ACTION_RCW},
{"CW", XED_OPERAND_ACTION_CW},
{"CRW", XED_OPERAND_ACTION_CRW},
{"CR", XED_OPERAND_ACTION_CR},
{"LAST", XED_OPERAND_ACTION_LAST},
{0, XED_OPERAND_ACTION_LAST},
};

        
xed_operand_action_enum_t str2xed_operand_action_enum_t(const char* s)
{
   const name_table_xed_operand_action_enum_t* p = name_array_xed_operand_action_enum_t;
   while( p->name ) {
     if (strcmp(p->name,s) == 0) {
      return p->value;
     }
     p++;
   }
        

   return XED_OPERAND_ACTION_INVALID;
}


const char* xed_operand_action_enum_t2str(const xed_operand_action_enum_t p)
{
   xed_operand_action_enum_t type_idx = p;
   if ( p > XED_OPERAND_ACTION_LAST) type_idx = XED_OPERAND_ACTION_LAST;
   return name_array_xed_operand_action_enum_t[type_idx].name;
}

xed_operand_action_enum_t xed_operand_action_enum_t_last(void) {
    return XED_OPERAND_ACTION_LAST;
}
       
/*

Here is a skeleton switch statement embedded in a comment


  switch(p) {
  case XED_OPERAND_ACTION_INVALID:
  case XED_OPERAND_ACTION_RW:
  case XED_OPERAND_ACTION_R:
  case XED_OPERAND_ACTION_W:
  case XED_OPERAND_ACTION_RCW:
  case XED_OPERAND_ACTION_CW:
  case XED_OPERAND_ACTION_CRW:
  case XED_OPERAND_ACTION_CR:
  case XED_OPERAND_ACTION_LAST:
  default:
     xed_assert(0);
  }
*/
