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
    bool x64; // ʹ��64λָ��
    ULONGLONG cip; //ָ��ָ�� (�������Ѱַ)
    unsigned int dest_size; //Ŀ�ĵش�С (���� ���� XED����)
    CBXEDPARSE_UNKNOWN cbUnknown; //δ֪�������ص�
    unsigned char dest[XEDPARSE_MAXASMSIZE]; //Ŀ�껺����
    char instr[XEDPARSE_MAXBUFSIZE]; //ָ���ı�
    char error[XEDPARSE_MAXBUFSIZE]; //�����ı� (������ִ���)
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
