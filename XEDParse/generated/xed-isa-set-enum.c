/// @file xed-isa-set-enum.c

// This file was automatically generated.
// Do not edit this file.

#include <string.h>
#include <assert.h>
#include "xed-isa-set-enum.h"

typedef struct {
    const char* name;
    xed_isa_set_enum_t value;
} name_table_xed_isa_set_enum_t;
static const name_table_xed_isa_set_enum_t name_array_xed_isa_set_enum_t[] = {
{"INVALID", XED_ISA_SET_INVALID},
{"3DNOW", XED_ISA_SET_3DNOW},
{"ADOX_ADCX", XED_ISA_SET_ADOX_ADCX},
{"AES", XED_ISA_SET_AES},
{"AMD", XED_ISA_SET_AMD},
{"AVX", XED_ISA_SET_AVX},
{"AVX2", XED_ISA_SET_AVX2},
{"AVX2GATHER", XED_ISA_SET_AVX2GATHER},
{"AVX512BW_128", XED_ISA_SET_AVX512BW_128},
{"AVX512BW_128N", XED_ISA_SET_AVX512BW_128N},
{"AVX512BW_256", XED_ISA_SET_AVX512BW_256},
{"AVX512BW_512", XED_ISA_SET_AVX512BW_512},
{"AVX512BW_KOP", XED_ISA_SET_AVX512BW_KOP},
{"AVX512CD_128", XED_ISA_SET_AVX512CD_128},
{"AVX512CD_256", XED_ISA_SET_AVX512CD_256},
{"AVX512CD_512", XED_ISA_SET_AVX512CD_512},
{"AVX512DQ_128", XED_ISA_SET_AVX512DQ_128},
{"AVX512DQ_128N", XED_ISA_SET_AVX512DQ_128N},
{"AVX512DQ_256", XED_ISA_SET_AVX512DQ_256},
{"AVX512DQ_512", XED_ISA_SET_AVX512DQ_512},
{"AVX512DQ_KOP", XED_ISA_SET_AVX512DQ_KOP},
{"AVX512DQ_SCALAR", XED_ISA_SET_AVX512DQ_SCALAR},
{"AVX512ER_512", XED_ISA_SET_AVX512ER_512},
{"AVX512ER_SCALAR", XED_ISA_SET_AVX512ER_SCALAR},
{"AVX512F_128", XED_ISA_SET_AVX512F_128},
{"AVX512F_128N", XED_ISA_SET_AVX512F_128N},
{"AVX512F_256", XED_ISA_SET_AVX512F_256},
{"AVX512F_512", XED_ISA_SET_AVX512F_512},
{"AVX512F_KOP", XED_ISA_SET_AVX512F_KOP},
{"AVX512F_SCALAR", XED_ISA_SET_AVX512F_SCALAR},
{"AVX512PF_512", XED_ISA_SET_AVX512PF_512},
{"AVX512_4FMAPS_512", XED_ISA_SET_AVX512_4FMAPS_512},
{"AVX512_4FMAPS_SCALAR", XED_ISA_SET_AVX512_4FMAPS_SCALAR},
{"AVX512_4VNNIW_512", XED_ISA_SET_AVX512_4VNNIW_512},
{"AVX512_BITALG_128", XED_ISA_SET_AVX512_BITALG_128},
{"AVX512_BITALG_256", XED_ISA_SET_AVX512_BITALG_256},
{"AVX512_BITALG_512", XED_ISA_SET_AVX512_BITALG_512},
{"AVX512_GFNI_128", XED_ISA_SET_AVX512_GFNI_128},
{"AVX512_GFNI_256", XED_ISA_SET_AVX512_GFNI_256},
{"AVX512_GFNI_512", XED_ISA_SET_AVX512_GFNI_512},
{"AVX512_IFMA_128", XED_ISA_SET_AVX512_IFMA_128},
{"AVX512_IFMA_256", XED_ISA_SET_AVX512_IFMA_256},
{"AVX512_IFMA_512", XED_ISA_SET_AVX512_IFMA_512},
{"AVX512_VAES_128", XED_ISA_SET_AVX512_VAES_128},
{"AVX512_VAES_256", XED_ISA_SET_AVX512_VAES_256},
{"AVX512_VAES_512", XED_ISA_SET_AVX512_VAES_512},
{"AVX512_VBMI2_128", XED_ISA_SET_AVX512_VBMI2_128},
{"AVX512_VBMI2_256", XED_ISA_SET_AVX512_VBMI2_256},
{"AVX512_VBMI2_512", XED_ISA_SET_AVX512_VBMI2_512},
{"AVX512_VBMI_128", XED_ISA_SET_AVX512_VBMI_128},
{"AVX512_VBMI_256", XED_ISA_SET_AVX512_VBMI_256},
{"AVX512_VBMI_512", XED_ISA_SET_AVX512_VBMI_512},
{"AVX512_VNNI_128", XED_ISA_SET_AVX512_VNNI_128},
{"AVX512_VNNI_256", XED_ISA_SET_AVX512_VNNI_256},
{"AVX512_VNNI_512", XED_ISA_SET_AVX512_VNNI_512},
{"AVX512_VPCLMULQDQ_128", XED_ISA_SET_AVX512_VPCLMULQDQ_128},
{"AVX512_VPCLMULQDQ_256", XED_ISA_SET_AVX512_VPCLMULQDQ_256},
{"AVX512_VPCLMULQDQ_512", XED_ISA_SET_AVX512_VPCLMULQDQ_512},
{"AVX512_VPOPCNTDQ_128", XED_ISA_SET_AVX512_VPOPCNTDQ_128},
{"AVX512_VPOPCNTDQ_256", XED_ISA_SET_AVX512_VPOPCNTDQ_256},
{"AVX512_VPOPCNTDQ_512", XED_ISA_SET_AVX512_VPOPCNTDQ_512},
{"AVXAES", XED_ISA_SET_AVXAES},
{"AVX_GFNI", XED_ISA_SET_AVX_GFNI},
{"BMI1", XED_ISA_SET_BMI1},
{"BMI2", XED_ISA_SET_BMI2},
{"CET", XED_ISA_SET_CET},
{"CLDEMOTE", XED_ISA_SET_CLDEMOTE},
{"CLFLUSHOPT", XED_ISA_SET_CLFLUSHOPT},
{"CLFSH", XED_ISA_SET_CLFSH},
{"CLWB", XED_ISA_SET_CLWB},
{"CLZERO", XED_ISA_SET_CLZERO},
{"CMOV", XED_ISA_SET_CMOV},
{"CMPXCHG16B", XED_ISA_SET_CMPXCHG16B},
{"F16C", XED_ISA_SET_F16C},
{"FAT_NOP", XED_ISA_SET_FAT_NOP},
{"FCMOV", XED_ISA_SET_FCMOV},
{"FMA", XED_ISA_SET_FMA},
{"FMA4", XED_ISA_SET_FMA4},
{"FXSAVE", XED_ISA_SET_FXSAVE},
{"FXSAVE64", XED_ISA_SET_FXSAVE64},
{"GFNI", XED_ISA_SET_GFNI},
{"I186", XED_ISA_SET_I186},
{"I286PROTECTED", XED_ISA_SET_I286PROTECTED},
{"I286REAL", XED_ISA_SET_I286REAL},
{"I386", XED_ISA_SET_I386},
{"I486", XED_ISA_SET_I486},
{"I486REAL", XED_ISA_SET_I486REAL},
{"I86", XED_ISA_SET_I86},
{"INVPCID", XED_ISA_SET_INVPCID},
{"LAHF", XED_ISA_SET_LAHF},
{"LONGMODE", XED_ISA_SET_LONGMODE},
{"LZCNT", XED_ISA_SET_LZCNT},
{"MONITOR", XED_ISA_SET_MONITOR},
{"MONITORX", XED_ISA_SET_MONITORX},
{"MOVBE", XED_ISA_SET_MOVBE},
{"MOVDIR", XED_ISA_SET_MOVDIR},
{"MPX", XED_ISA_SET_MPX},
{"PAUSE", XED_ISA_SET_PAUSE},
{"PCLMULQDQ", XED_ISA_SET_PCLMULQDQ},
{"PCONFIG", XED_ISA_SET_PCONFIG},
{"PENTIUMMMX", XED_ISA_SET_PENTIUMMMX},
{"PENTIUMREAL", XED_ISA_SET_PENTIUMREAL},
{"PKU", XED_ISA_SET_PKU},
{"POPCNT", XED_ISA_SET_POPCNT},
{"PPRO", XED_ISA_SET_PPRO},
{"PREFETCHW", XED_ISA_SET_PREFETCHW},
{"PREFETCHWT1", XED_ISA_SET_PREFETCHWT1},
{"PREFETCH_NOP", XED_ISA_SET_PREFETCH_NOP},
{"PT", XED_ISA_SET_PT},
{"RDPID", XED_ISA_SET_RDPID},
{"RDPMC", XED_ISA_SET_RDPMC},
{"RDRAND", XED_ISA_SET_RDRAND},
{"RDSEED", XED_ISA_SET_RDSEED},
{"RDTSCP", XED_ISA_SET_RDTSCP},
{"RDWRFSGS", XED_ISA_SET_RDWRFSGS},
{"RTM", XED_ISA_SET_RTM},
{"SGX", XED_ISA_SET_SGX},
{"SGX_ENCLV", XED_ISA_SET_SGX_ENCLV},
{"SHA", XED_ISA_SET_SHA},
{"SMAP", XED_ISA_SET_SMAP},
{"SMX", XED_ISA_SET_SMX},
{"SSE", XED_ISA_SET_SSE},
{"SSE2", XED_ISA_SET_SSE2},
{"SSE2MMX", XED_ISA_SET_SSE2MMX},
{"SSE3", XED_ISA_SET_SSE3},
{"SSE3X87", XED_ISA_SET_SSE3X87},
{"SSE4", XED_ISA_SET_SSE4},
{"SSE42", XED_ISA_SET_SSE42},
{"SSE4A", XED_ISA_SET_SSE4A},
{"SSEMXCSR", XED_ISA_SET_SSEMXCSR},
{"SSE_PREFETCH", XED_ISA_SET_SSE_PREFETCH},
{"SSSE3", XED_ISA_SET_SSSE3},
{"SSSE3MMX", XED_ISA_SET_SSSE3MMX},
{"SVM", XED_ISA_SET_SVM},
{"TBM", XED_ISA_SET_TBM},
{"VAES", XED_ISA_SET_VAES},
{"VMFUNC", XED_ISA_SET_VMFUNC},
{"VPCLMULQDQ", XED_ISA_SET_VPCLMULQDQ},
{"VTX", XED_ISA_SET_VTX},
{"WAITPKG", XED_ISA_SET_WAITPKG},
{"WBNOINVD", XED_ISA_SET_WBNOINVD},
{"X87", XED_ISA_SET_X87},
{"XOP", XED_ISA_SET_XOP},
{"XSAVE", XED_ISA_SET_XSAVE},
{"XSAVEC", XED_ISA_SET_XSAVEC},
{"XSAVEOPT", XED_ISA_SET_XSAVEOPT},
{"XSAVES", XED_ISA_SET_XSAVES},
{"LAST", XED_ISA_SET_LAST},
{0, XED_ISA_SET_LAST},
};

        
xed_isa_set_enum_t str2xed_isa_set_enum_t(const char* s)
{
   const name_table_xed_isa_set_enum_t* p = name_array_xed_isa_set_enum_t;
   while( p->name ) {
     if (strcmp(p->name,s) == 0) {
      return p->value;
     }
     p++;
   }
        

   return XED_ISA_SET_INVALID;
}


const char* xed_isa_set_enum_t2str(const xed_isa_set_enum_t p)
{
   xed_isa_set_enum_t type_idx = p;
   if ( p > XED_ISA_SET_LAST) type_idx = XED_ISA_SET_LAST;
   return name_array_xed_isa_set_enum_t[type_idx].name;
}

xed_isa_set_enum_t xed_isa_set_enum_t_last(void) {
    return XED_ISA_SET_LAST;
}
       
/*

Here is a skeleton switch statement embedded in a comment


  switch(p) {
  case XED_ISA_SET_INVALID:
  case XED_ISA_SET_3DNOW:
  case XED_ISA_SET_ADOX_ADCX:
  case XED_ISA_SET_AES:
  case XED_ISA_SET_AMD:
  case XED_ISA_SET_AVX:
  case XED_ISA_SET_AVX2:
  case XED_ISA_SET_AVX2GATHER:
  case XED_ISA_SET_AVX512BW_128:
  case XED_ISA_SET_AVX512BW_128N:
  case XED_ISA_SET_AVX512BW_256:
  case XED_ISA_SET_AVX512BW_512:
  case XED_ISA_SET_AVX512BW_KOP:
  case XED_ISA_SET_AVX512CD_128:
  case XED_ISA_SET_AVX512CD_256:
  case XED_ISA_SET_AVX512CD_512:
  case XED_ISA_SET_AVX512DQ_128:
  case XED_ISA_SET_AVX512DQ_128N:
  case XED_ISA_SET_AVX512DQ_256:
  case XED_ISA_SET_AVX512DQ_512:
  case XED_ISA_SET_AVX512DQ_KOP:
  case XED_ISA_SET_AVX512DQ_SCALAR:
  case XED_ISA_SET_AVX512ER_512:
  case XED_ISA_SET_AVX512ER_SCALAR:
  case XED_ISA_SET_AVX512F_128:
  case XED_ISA_SET_AVX512F_128N:
  case XED_ISA_SET_AVX512F_256:
  case XED_ISA_SET_AVX512F_512:
  case XED_ISA_SET_AVX512F_KOP:
  case XED_ISA_SET_AVX512F_SCALAR:
  case XED_ISA_SET_AVX512PF_512:
  case XED_ISA_SET_AVX512_4FMAPS_512:
  case XED_ISA_SET_AVX512_4FMAPS_SCALAR:
  case XED_ISA_SET_AVX512_4VNNIW_512:
  case XED_ISA_SET_AVX512_BITALG_128:
  case XED_ISA_SET_AVX512_BITALG_256:
  case XED_ISA_SET_AVX512_BITALG_512:
  case XED_ISA_SET_AVX512_GFNI_128:
  case XED_ISA_SET_AVX512_GFNI_256:
  case XED_ISA_SET_AVX512_GFNI_512:
  case XED_ISA_SET_AVX512_IFMA_128:
  case XED_ISA_SET_AVX512_IFMA_256:
  case XED_ISA_SET_AVX512_IFMA_512:
  case XED_ISA_SET_AVX512_VAES_128:
  case XED_ISA_SET_AVX512_VAES_256:
  case XED_ISA_SET_AVX512_VAES_512:
  case XED_ISA_SET_AVX512_VBMI2_128:
  case XED_ISA_SET_AVX512_VBMI2_256:
  case XED_ISA_SET_AVX512_VBMI2_512:
  case XED_ISA_SET_AVX512_VBMI_128:
  case XED_ISA_SET_AVX512_VBMI_256:
  case XED_ISA_SET_AVX512_VBMI_512:
  case XED_ISA_SET_AVX512_VNNI_128:
  case XED_ISA_SET_AVX512_VNNI_256:
  case XED_ISA_SET_AVX512_VNNI_512:
  case XED_ISA_SET_AVX512_VPCLMULQDQ_128:
  case XED_ISA_SET_AVX512_VPCLMULQDQ_256:
  case XED_ISA_SET_AVX512_VPCLMULQDQ_512:
  case XED_ISA_SET_AVX512_VPOPCNTDQ_128:
  case XED_ISA_SET_AVX512_VPOPCNTDQ_256:
  case XED_ISA_SET_AVX512_VPOPCNTDQ_512:
  case XED_ISA_SET_AVXAES:
  case XED_ISA_SET_AVX_GFNI:
  case XED_ISA_SET_BMI1:
  case XED_ISA_SET_BMI2:
  case XED_ISA_SET_CET:
  case XED_ISA_SET_CLDEMOTE:
  case XED_ISA_SET_CLFLUSHOPT:
  case XED_ISA_SET_CLFSH:
  case XED_ISA_SET_CLWB:
  case XED_ISA_SET_CLZERO:
  case XED_ISA_SET_CMOV:
  case XED_ISA_SET_CMPXCHG16B:
  case XED_ISA_SET_F16C:
  case XED_ISA_SET_FAT_NOP:
  case XED_ISA_SET_FCMOV:
  case XED_ISA_SET_FMA:
  case XED_ISA_SET_FMA4:
  case XED_ISA_SET_FXSAVE:
  case XED_ISA_SET_FXSAVE64:
  case XED_ISA_SET_GFNI:
  case XED_ISA_SET_I186:
  case XED_ISA_SET_I286PROTECTED:
  case XED_ISA_SET_I286REAL:
  case XED_ISA_SET_I386:
  case XED_ISA_SET_I486:
  case XED_ISA_SET_I486REAL:
  case XED_ISA_SET_I86:
  case XED_ISA_SET_INVPCID:
  case XED_ISA_SET_LAHF:
  case XED_ISA_SET_LONGMODE:
  case XED_ISA_SET_LZCNT:
  case XED_ISA_SET_MONITOR:
  case XED_ISA_SET_MONITORX:
  case XED_ISA_SET_MOVBE:
  case XED_ISA_SET_MOVDIR:
  case XED_ISA_SET_MPX:
  case XED_ISA_SET_PAUSE:
  case XED_ISA_SET_PCLMULQDQ:
  case XED_ISA_SET_PCONFIG:
  case XED_ISA_SET_PENTIUMMMX:
  case XED_ISA_SET_PENTIUMREAL:
  case XED_ISA_SET_PKU:
  case XED_ISA_SET_POPCNT:
  case XED_ISA_SET_PPRO:
  case XED_ISA_SET_PREFETCHW:
  case XED_ISA_SET_PREFETCHWT1:
  case XED_ISA_SET_PREFETCH_NOP:
  case XED_ISA_SET_PT:
  case XED_ISA_SET_RDPID:
  case XED_ISA_SET_RDPMC:
  case XED_ISA_SET_RDRAND:
  case XED_ISA_SET_RDSEED:
  case XED_ISA_SET_RDTSCP:
  case XED_ISA_SET_RDWRFSGS:
  case XED_ISA_SET_RTM:
  case XED_ISA_SET_SGX:
  case XED_ISA_SET_SGX_ENCLV:
  case XED_ISA_SET_SHA:
  case XED_ISA_SET_SMAP:
  case XED_ISA_SET_SMX:
  case XED_ISA_SET_SSE:
  case XED_ISA_SET_SSE2:
  case XED_ISA_SET_SSE2MMX:
  case XED_ISA_SET_SSE3:
  case XED_ISA_SET_SSE3X87:
  case XED_ISA_SET_SSE4:
  case XED_ISA_SET_SSE42:
  case XED_ISA_SET_SSE4A:
  case XED_ISA_SET_SSEMXCSR:
  case XED_ISA_SET_SSE_PREFETCH:
  case XED_ISA_SET_SSSE3:
  case XED_ISA_SET_SSSE3MMX:
  case XED_ISA_SET_SVM:
  case XED_ISA_SET_TBM:
  case XED_ISA_SET_VAES:
  case XED_ISA_SET_VMFUNC:
  case XED_ISA_SET_VPCLMULQDQ:
  case XED_ISA_SET_VTX:
  case XED_ISA_SET_WAITPKG:
  case XED_ISA_SET_WBNOINVD:
  case XED_ISA_SET_X87:
  case XED_ISA_SET_XOP:
  case XED_ISA_SET_XSAVE:
  case XED_ISA_SET_XSAVEC:
  case XED_ISA_SET_XSAVEOPT:
  case XED_ISA_SET_XSAVES:
  case XED_ISA_SET_LAST:
  default:
     xed_assert(0);
  }
*/
