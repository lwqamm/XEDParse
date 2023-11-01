#pragma once

//==============================================================================
//
// Title:		file.h
// Purpose:		A short description of the interface.
//
// Created on:	2023-03-08 at 10:17:29 by .
// Copyright:	. All Rights Reserved.
//
//==============================================================================

#include <Windows.h>

extern "C"
{

#if _WIN64
//#pragma comment(lib, "H:/VS1/XEDParse/XEDParse/xed2/lib/libxed_x64.lib")
#else
//#pragma comment(lib, "H:/VS1/XEDParse/XEDParse/xed2/lib/libxed_x86.lib")
#endif

}

#ifndef __file_H__
#define __file_H__

#define XEDPARSE_CALL //calling convention

#define XEDPARSE_MAXBUFSIZE 256
#define XEDPARSE_MAXASMSIZE 16

//typedefs
typedef bool (XEDPARSE_CALL* CBXEDPARSE_UNKNOWN)(const char* text, ULONGLONG* value);

#ifdef __cplusplus
extern "C" {
#endif
	//XEDParse structs
//typedefs
	typedef bool (XEDPARSE_CALL* CBXEDPARSE_UNKNOWN)(const char* text, ULONGLONG* value);

	//XEDParse enums
	enum XEDPARSE_STATUS
	{
		XEDPARSE_ERROR = 0,
		XEDPARSE_OK = 1
	};

	//XEDParse structs
#pragma pack(push,8)
	struct XEDPARSE
	{
		bool x64; // use 64-bit instructions
		ULONGLONG cip; //instruction pointer (for relative addressing)
		unsigned int dest_size; //destination size (returned by XEDParse)
		CBXEDPARSE_UNKNOWN cbUnknown; //unknown operand callback
		unsigned char dest[XEDPARSE_MAXASMSIZE]; //destination buffer
		char instr[XEDPARSE_MAXBUFSIZE]; //instruction text
		char error[XEDPARSE_MAXBUFSIZE]; //error text (in case of an error)
	};
#pragma pack(pop)
	 XEDPARSE_STATUS XEDPARSE_CALL XEDParseAssemble(XEDPARSE* XEDParse);
	 int StrToAsm(bool X64, const char* AsmStr, unsigned char dest[XEDPARSE_MAXASMSIZE], LONG64 cip);
#ifdef __cplusplus
}
#endif

#endif  /* ndef __file_H__ */

