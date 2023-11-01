#include "XEDParse.h"
#include "xed-interface.h"
#include "Parser.h"
#include "Translator.h"
#include "ParseTest.h"

//#pragma comment(lib, "H:/VS1/XEDParse/Release/libxed.lib")
void XEDParseSetMode(bool X64, xed_state_t* State)
{
    if(X64)
    {
        State->mmode            = XED_MACHINE_MODE_LONG_64;
        State->stack_addr_width = XED_ADDRESS_WIDTH_32b;
    }
    else
    {
        State->mmode            = XED_MACHINE_MODE_LEGACY_32;
        State->stack_addr_width = XED_ADDRESS_WIDTH_32b;
    }
}

 XEDPARSE_STATUS XEDPARSE_CALL XEDParseAssemble(XEDPARSE* XEDParse)
{
    // Initialize all of the tables only once.
    // This is mainly independent to everything else.
    LookupTableInit();

    Inst instruction;
    memset(&instruction, 0, sizeof(Inst));

    if(!ParseInstString(XEDParse, &instruction))
        return XEDPARSE_ERROR;

    xed_state_t state;
    XEDParseSetMode(XEDParse->x64, &state);

    if(!Translate(XEDParse, state, &instruction))
        return XEDPARSE_ERROR;

    char instString[XEDPARSE_MAXBUFSIZE];
    memset(instString, 0, sizeof(instString));

    InstructionToString(instString, &instruction);
    strcpy(XEDParse->error, instString);
    _strlwr(XEDParse->error);

    return XEDPARSE_OK;
}
 

 __declspec(dllexport)int StrToAsm(bool X64,const char* AsmStr ,unsigned char dest[XEDPARSE_MAXASMSIZE], LONG64 cip)
{
	XEDPARSE xed = { 0 };
	xed.x64 = X64;
    xed.cip = cip;
	// 输入一条汇编指令并转换
    strcpy(xed.instr, AsmStr);
	// 执行汇编指令
	if (XEDPARSE_OK != XEDParseAssemble(&xed))
	{
		//printf("指令错误: %s\n", xed.error);
        return -1;
	}

	// 输出参数
	//PrintOpCode(xed.instr, xed.dest, xed.dest_size);
    memcpy_s(dest, XEDPARSE_MAXASMSIZE, xed.dest, xed.dest_size);
   
	return xed.dest_size;

		//https ://blog.51cto.com/lyshark/7722029
}

#include <stdio.h>

void PrintOpCode(const char* pAsm, unsigned char* pOpcode, int nSize)
{
	for (int i = 0; i < nSize; ++i)
	{
		printf("%02X ", pOpcode[i]);
	}
	printf("%30s ", pAsm);
	printf("%d \n", nSize);
}

int main1()
{
	unsigned char dest[16] = { 0 };
	int len = StrToAsm(FALSE,"mov qword ptr ss:[esp+10],ebx", dest,0);
	if (len)
	{
		PrintOpCode("mov qword ptr ss:[esp+10],rbx", dest, len);
	}

	return 0;
}

//原文链接：https ://blog.csdn.net/lyshark_csdn/article/details/126758346


#if _MSC_VER>=1900  
#include "stdio.h"   
_ACRTIMP_ALT FILE* __cdecl __acrt_iob_func(unsigned);
#ifdef __cplusplus   
extern "C"
#endif   
FILE * __cdecl __iob_func(unsigned i) {
	return __acrt_iob_func(i);
}
#endif /* _MSC_VER>=1900 */  
