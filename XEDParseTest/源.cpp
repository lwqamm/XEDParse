#include <iostream>
#include <Windows.h>
#include "XEDParse.h"

extern "C"
{
//#include "D:/XEDParse/XEDParse.h"

#if _WIN64
#pragma comment(lib, "XEDParse_X64.lib")

	
#else
#pragma comment(lib, "XEDParse_X86.lib")

#endif
	/*
	功能：asm指令转换成字节集
	参数1：是否X64
	参数2：汇编指令字符串
	参数3：返回的字节集
	返回值：返回的字节集长度
	*/
	/*__declspec(dllimport)*/ int StrToAsm(bool X64, const char* AsmStr, unsigned char dest[XEDPARSE_MAXASMSIZE],LONG64 cip);

}

void PrintOpCode1(const char* pAsm, unsigned char* pOpcode, int nSize)
{
	for (int i = 0; i < nSize; ++i)
	{
		printf("%02X ", pOpcode[i]);
	}
	printf("%30s ", pAsm);
	printf("%d \n", nSize);
}


//int main1()
//{
//
//	const char* buffer = "\x48\x89\x5C\x24\x10\x48\x89\x74\x24\x18\x55\x57\x41\x56";
//
//	csh handle;
//	cs_insn* insn;
//	size_t count;
//
//	int size = 14;
//
//	// 打开句柄
//	if (cs_open(CS_ARCH_X86, CS_MODE_64, &handle) != CS_ERR_OK)
//	{
//		return 0;
//	}
//
//	// 反汇编代码,地址从0x1000开始,返回总条数
//	// https://www.cnblogs.com/lyshark
//	count = cs_disasm(handle, (unsigned char*)buffer, size, 0x00007FFB57280920, 0, &insn);
//
//	if (count > 0)
//	{
//		size_t index;
//		for (index = 0; index < count; index++)
//		{
//
//			printf("0000%llX | ", insn[index].address);
//			for (int x = 0; x < insn[index].size; x++)
//			{
//				printf(" %02X", insn[index].bytes[x]);
//			}
//			if (index >= 2 && index <= 3)
//			{
//				printf("                     |%s %s \n", insn[index].mnemonic, insn[index].op_str);
//				continue;
//			}
//			if (index >= 4)
//			{
//				printf("                  |%s %s \n\n\n\n", insn[index].mnemonic, insn[index].op_str);
//				continue;
//			}
//			printf("         |%s %s \n", insn[index].mnemonic, insn[index].op_str);
//		}
//
//		cs_free(insn, count);
//	}
//	else
//	{
//		printf("反汇编返回长度为空 \n");
//	}
//
//	cs_close(&handle);
//
//
//	//原文链接：https ://blog.csdn.net/lyshark_csdn/article/details/126758346
//
//	system("pause");
//	return 0;
//}

int main()
{
	unsigned char dest[XEDPARSE_MAXASMSIZE] = { 0 };
	int len = StrToAsm(TRUE,"mov rax,qword ptr ds:[7FFB57334510]", dest,0x00007FFB5728093D);
	if (len)
	{
		PrintOpCode1("mov rax,qword ptr ds:[7FFB57334510]", dest, len);
	}

	//printf("第二个lib\n");
	//main1();
	return 0;
}


//xed_tables_init()


// xed_operand_values_get_memory_displacement_length_bits_raw 已经在 xed - operand - values - interface - uisa.obj 中定义	XEDParse	H : \VS1\XEDParse\XEDParse\xed - operand - values - interface - repl.obj	1
// xed_operand_values_get_memory_displacement_int64 已经在 xed - operand - values - interface - uisa.obj 中定义	XEDParse	H : \VS1\XEDParse\XEDParse\xed - operand - values - interface - repl.obj	1
// xed_operand_values_get_memory_displacement_int64_raw 已经在 xed - operand - values - interface - uisa.obj 中定义	XEDParse	H : \VS1\XEDParse\XEDParse\xed - operand - values - interface - repl.obj	1
// xed_operand_values_get_memory_displacement_length_bits 已经在 xed - operand - values - interface - uisa.obj 中定义	XEDParse	H : \VS1\XEDParse\XEDParse\xed - operand - values - interface - repl.obj	1
