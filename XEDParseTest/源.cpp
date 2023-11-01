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
	���ܣ�asmָ��ת�����ֽڼ�
	����1���Ƿ�X64
	����2�����ָ���ַ���
	����3�����ص��ֽڼ�
	����ֵ�����ص��ֽڼ�����
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
//	// �򿪾��
//	if (cs_open(CS_ARCH_X86, CS_MODE_64, &handle) != CS_ERR_OK)
//	{
//		return 0;
//	}
//
//	// ��������,��ַ��0x1000��ʼ,����������
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
//		printf("����෵�س���Ϊ�� \n");
//	}
//
//	cs_close(&handle);
//
//
//	//ԭ�����ӣ�https ://blog.csdn.net/lyshark_csdn/article/details/126758346
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

	//printf("�ڶ���lib\n");
	//main1();
	return 0;
}


//xed_tables_init()


// xed_operand_values_get_memory_displacement_length_bits_raw �Ѿ��� xed - operand - values - interface - uisa.obj �ж���	XEDParse	H : \VS1\XEDParse\XEDParse\xed - operand - values - interface - repl.obj	1
// xed_operand_values_get_memory_displacement_int64 �Ѿ��� xed - operand - values - interface - uisa.obj �ж���	XEDParse	H : \VS1\XEDParse\XEDParse\xed - operand - values - interface - repl.obj	1
// xed_operand_values_get_memory_displacement_int64_raw �Ѿ��� xed - operand - values - interface - uisa.obj �ж���	XEDParse	H : \VS1\XEDParse\XEDParse\xed - operand - values - interface - repl.obj	1
// xed_operand_values_get_memory_displacement_length_bits �Ѿ��� xed - operand - values - interface - uisa.obj �ж���	XEDParse	H : \VS1\XEDParse\XEDParse\xed - operand - values - interface - repl.obj	1
