/// @file xed-operand-ctype-enum.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(XED_OPERAND_CTYPE_ENUM_H)
# define XED_OPERAND_CTYPE_ENUM_H
#include "xed-common-hdrs.h"
typedef enum {
  XED_OPERAND_CTYPE_INVALID,
  XED_OPERAND_CTYPE_XED_BITS_T,
  XED_OPERAND_CTYPE_XED_CHIP_ENUM_T,
  XED_OPERAND_CTYPE_XED_ERROR_ENUM_T,
  XED_OPERAND_CTYPE_XED_ICLASS_ENUM_T,
  XED_OPERAND_CTYPE_XED_INT64_T,
  XED_OPERAND_CTYPE_XED_REG_ENUM_T,
  XED_OPERAND_CTYPE_XED_UINT16_T,
  XED_OPERAND_CTYPE_XED_UINT64_T,
  XED_OPERAND_CTYPE_XED_UINT8_T,
  XED_OPERAND_CTYPE_LAST
} xed_operand_ctype_enum_t;

/// This converts strings to #xed_operand_ctype_enum_t types.
/// @param s A C-string.
/// @return #xed_operand_ctype_enum_t
/// @ingroup ENUM
XED_DLL_EXPORT xed_operand_ctype_enum_t str2xed_operand_ctype_enum_t(const char* s);
/// This converts strings to #xed_operand_ctype_enum_t types.
/// @param p An enumeration element of type xed_operand_ctype_enum_t.
/// @return string
/// @ingroup ENUM
XED_DLL_EXPORT const char* xed_operand_ctype_enum_t2str(const xed_operand_ctype_enum_t p);

/// Returns the last element of the enumeration
/// @return xed_operand_ctype_enum_t The last element of the enumeration.
/// @ingroup ENUM
XED_DLL_EXPORT xed_operand_ctype_enum_t xed_operand_ctype_enum_t_last(void);
#endif
