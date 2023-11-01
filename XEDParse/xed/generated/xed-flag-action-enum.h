/// @file xed-flag-action-enum.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(XED_FLAG_ACTION_ENUM_H)
# define XED_FLAG_ACTION_ENUM_H
#include "xed-common-hdrs.h"
typedef enum {
  XED_FLAG_ACTION_INVALID,
  XED_FLAG_ACTION_u, ///< undefined (treated as a write)
  XED_FLAG_ACTION_tst, ///< test (read)
  XED_FLAG_ACTION_mod, ///< modification (write)
  XED_FLAG_ACTION_0, ///< value will be zero (write)
  XED_FLAG_ACTION_pop, ///< value comes from the stack (write)
  XED_FLAG_ACTION_ah, ///< value comes from AH (write)
  XED_FLAG_ACTION_1, ///< value will be 1 (write)
  XED_FLAG_ACTION_LAST
} xed_flag_action_enum_t;

/// This converts strings to #xed_flag_action_enum_t types.
/// @param s A C-string.
/// @return #xed_flag_action_enum_t
/// @ingroup ENUM
XED_DLL_EXPORT xed_flag_action_enum_t str2xed_flag_action_enum_t(const char* s);
/// This converts strings to #xed_flag_action_enum_t types.
/// @param p An enumeration element of type xed_flag_action_enum_t.
/// @return string
/// @ingroup ENUM
XED_DLL_EXPORT const char* xed_flag_action_enum_t2str(const xed_flag_action_enum_t p);

/// Returns the last element of the enumeration
/// @return xed_flag_action_enum_t The last element of the enumeration.
/// @ingroup ENUM
XED_DLL_EXPORT xed_flag_action_enum_t xed_flag_action_enum_t_last(void);
#endif
