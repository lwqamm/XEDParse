#ifndef _XEDPARSE_H
#define _XEDPARSE_H

#include <windows.h>

//XEDParse defines
#ifdef XEDPARSE_STATIC
#define XEDPARSE_EXPORT
#else
#ifdef XEDPARSE_BUILD
#define XEDPARSE_EXPORT __declspec(dllexport)
#else
#define XEDPARSE_EXPORT __declspec(dllimport)
#endif //XEDPARSE_BUILD
#endif

#define XEDPARSE_CALL //calling convention

#define XEDPARSE_MAXBUFSIZE 256
#define XEDPARSE_MAXASMSIZE 16

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
    bool x64; // 使用64位指令
    ULONGLONG cip; //指令指针 (用于相对寻址)
    unsigned int dest_size; //目的地大小 (返回 靠近 XED分析)
    CBXEDPARSE_UNKNOWN cbUnknown; //未知操作数回调
    unsigned char dest[XEDPARSE_MAXASMSIZE]; //目标缓冲区
    char instr[XEDPARSE_MAXBUFSIZE]; //指令文本
    char error[XEDPARSE_MAXBUFSIZE]; //错误文本 (如果出现错误)
};
#pragma pack(pop)

#ifdef __cplusplus
extern "C"
{
#endif
    XEDPARSE_STATUS XEDPARSE_CALL XEDParseAssemble(XEDPARSE* XEDParse);
    __declspec(dllexport)   int StrToAsm(bool X64, const char* AsmStr, unsigned char dest[XEDPARSE_MAXASMSIZE],LONG64 cip);

#ifdef __cplusplus
}
#endif

#endif // _XEDPARSE_H
