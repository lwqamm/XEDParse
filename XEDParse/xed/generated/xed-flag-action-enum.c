/// @file xed-flag-action-enum.c

// This file was automatically generated.
// Do not edit this file.

#include <string.h>
#include <assert.h>
#include "xed-flag-action-enum.h"

typedef struct {
    const char* name;
    xed_flag_action_enum_t value;
} name_table_xed_flag_action_enum_t;
static const name_table_xed_flag_action_enum_t name_array_xed_flag_action_enum_t[] = {
{"INVALID", XED_FLAG_ACTION_INVALID},
{"u", XED_FLAG_ACTION_u},
{"tst", XED_FLAG_ACTION_tst},
{"mod", XED_FLAG_ACTION_mod},
{"0", XED_FLAG_ACTION_0},
{"pop", XED_FLAG_ACTION_pop},
{"ah", XED_FLAG_ACTION_ah},
{"1", XED_FLAG_ACTION_1},
{"LAST", XED_FLAG_ACTION_LAST},
{0, XED_FLAG_ACTION_LAST},
};

        
xed_flag_action_enum_t str2xed_flag_action_enum_t(const char* s)
{
   const name_table_xed_flag_action_enum_t* p = name_array_xed_flag_action_enum_t;
   while( p->name ) {
     if (strcmp(p->name,s) == 0) {
      return p->value;
     }
     p++;
   }
        

   return XED_FLAG_ACTION_INVALID;
}


const char* xed_flag_action_enum_t2str(const xed_flag_action_enum_t p)
{
   xed_flag_action_enum_t type_idx = p;
   if ( p > XED_FLAG_ACTION_LAST) type_idx = XED_FLAG_ACTION_LAST;
   return name_array_xed_flag_action_enum_t[type_idx].name;
}

xed_flag_action_enum_t xed_flag_action_enum_t_last(void) {
    return XED_FLAG_ACTION_LAST;
}
       
/*

Here is a skeleton switch statement embedded in a comment


  switch(p) {
  case XED_FLAG_ACTION_INVALID:
  case XED_FLAG_ACTION_u:
  case XED_FLAG_ACTION_tst:
  case XED_FLAG_ACTION_mod:
  case XED_FLAG_ACTION_0:
  case XED_FLAG_ACTION_pop:
  case XED_FLAG_ACTION_ah:
  case XED_FLAG_ACTION_1:
  case XED_FLAG_ACTION_LAST:
  default:
     xed_assert(0);
  }
*/
