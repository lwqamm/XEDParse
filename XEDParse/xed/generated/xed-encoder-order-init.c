/// @file xed-encoder-order-init.c

// This file was automatically generated.
// Do not edit this file.

/*BEGIN_LEGAL

Copyright (c) 2018 Intel Corporation

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
  
END_LEGAL */
#include "xed-internal-header.h"
void xed_init_encoder_order(void)
{
xed_encode_order_limit[11]=0;
xed_encode_order[30][0]=XED_OPERAND_IMM0;
xed_encode_order[30][1]=XED_OPERAND_REG0;
xed_encode_order_limit[30]=2;
xed_encode_order[18][0]=XED_OPERAND_REG0;
xed_encode_order[18][1]=XED_OPERAND_MEM0;
xed_encode_order[18][2]=XED_OPERAND_REG1;
xed_encode_order_limit[18]=3;
xed_encode_order[26][0]=XED_OPERAND_REG0;
xed_encode_order[26][1]=XED_OPERAND_REG1;
xed_encode_order[26][2]=XED_OPERAND_MEM0;
xed_encode_order[26][3]=XED_OPERAND_REG2;
xed_encode_order[26][4]=XED_OPERAND_IMM0;
xed_encode_order_limit[26]=5;
xed_encode_order[24][0]=XED_OPERAND_IMM0;
xed_encode_order_limit[24]=1;
xed_encode_order[2][0]=XED_OPERAND_REG0;
xed_encode_order[2][1]=XED_OPERAND_REG1;
xed_encode_order_limit[2]=2;
xed_encode_order[31][0]=XED_OPERAND_REG0;
xed_encode_order[31][1]=XED_OPERAND_IMM0;
xed_encode_order[31][2]=XED_OPERAND_IMM1;
xed_encode_order_limit[31]=3;
xed_encode_order[12][0]=XED_OPERAND_REG0;
xed_encode_order[12][1]=XED_OPERAND_AGEN;
xed_encode_order_limit[12]=2;
xed_encode_order[8][0]=XED_OPERAND_RELBR;
xed_encode_order_limit[8]=1;
xed_encode_order[25][0]=XED_OPERAND_REG0;
xed_encode_order[25][1]=XED_OPERAND_REG1;
xed_encode_order[25][2]=XED_OPERAND_IMM0;
xed_encode_order[25][3]=XED_OPERAND_IMM1;
xed_encode_order_limit[25]=4;
xed_encode_order[13][0]=XED_OPERAND_MEM0;
xed_encode_order[13][1]=XED_OPERAND_REG0;
xed_encode_order[13][2]=XED_OPERAND_REG1;
xed_encode_order_limit[13]=3;
xed_encode_order[15][0]=XED_OPERAND_REG0;
xed_encode_order[15][1]=XED_OPERAND_REG1;
xed_encode_order[15][2]=XED_OPERAND_IMM0;
xed_encode_order_limit[15]=3;
xed_encode_order[19][0]=XED_OPERAND_MEM0;
xed_encode_order[19][1]=XED_OPERAND_REG0;
xed_encode_order_limit[19]=2;
xed_encode_order[20][0]=XED_OPERAND_MEM0;
xed_encode_order[20][1]=XED_OPERAND_IMM0;
xed_encode_order_limit[20]=2;
xed_encode_order[3][0]=XED_OPERAND_REG0;
xed_encode_order[3][1]=XED_OPERAND_MEM0;
xed_encode_order_limit[3]=2;
xed_encode_order[7][0]=XED_OPERAND_REG0;
xed_encode_order[7][1]=XED_OPERAND_REG1;
xed_encode_order[7][2]=XED_OPERAND_REG2;
xed_encode_order[7][3]=XED_OPERAND_MEM0;
xed_encode_order_limit[7]=4;
xed_encode_order[23][0]=XED_OPERAND_MEM0;
xed_encode_order[23][1]=XED_OPERAND_REG0;
xed_encode_order[23][2]=XED_OPERAND_REG1;
xed_encode_order[23][3]=XED_OPERAND_IMM0;
xed_encode_order_limit[23]=4;
xed_encode_order[9][0]=XED_OPERAND_REG0;
xed_encode_order[9][1]=XED_OPERAND_REG1;
xed_encode_order[9][2]=XED_OPERAND_REG2;
xed_encode_order[9][3]=XED_OPERAND_REG3;
xed_encode_order[9][4]=XED_OPERAND_IMM0;
xed_encode_order_limit[9]=5;
xed_encode_order[0][0]=XED_OPERAND_MEM0;
xed_encode_order_limit[0]=1;
xed_encode_order[5][0]=XED_OPERAND_REG0;
xed_encode_order[5][1]=XED_OPERAND_REG1;
xed_encode_order[5][2]=XED_OPERAND_REG2;
xed_encode_order_limit[5]=3;
xed_encode_order[14][0]=XED_OPERAND_REG0;
xed_encode_order[14][1]=XED_OPERAND_MEM0;
xed_encode_order[14][2]=XED_OPERAND_IMM0;
xed_encode_order_limit[14]=3;
xed_encode_order[10][0]=XED_OPERAND_REG0;
xed_encode_order[10][1]=XED_OPERAND_REG1;
xed_encode_order[10][2]=XED_OPERAND_REG2;
xed_encode_order[10][3]=XED_OPERAND_MEM0;
xed_encode_order[10][4]=XED_OPERAND_IMM0;
xed_encode_order_limit[10]=5;
xed_encode_order[28][0]=XED_OPERAND_IMM0;
xed_encode_order[28][1]=XED_OPERAND_IMM1;
xed_encode_order_limit[28]=2;
xed_encode_order[29][0]=XED_OPERAND_PTR;
xed_encode_order[29][1]=XED_OPERAND_IMM0;
xed_encode_order_limit[29]=2;
xed_encode_order[22][0]=XED_OPERAND_REG0;
xed_encode_order[22][1]=XED_OPERAND_REG1;
xed_encode_order[22][2]=XED_OPERAND_MEM0;
xed_encode_order[22][3]=XED_OPERAND_REG2;
xed_encode_order_limit[22]=4;
xed_encode_order[16][0]=XED_OPERAND_REG0;
xed_encode_order[16][1]=XED_OPERAND_REG1;
xed_encode_order[16][2]=XED_OPERAND_REG2;
xed_encode_order[16][3]=XED_OPERAND_IMM0;
xed_encode_order_limit[16]=4;
xed_encode_order[1][0]=XED_OPERAND_REG0;
xed_encode_order_limit[1]=1;
xed_encode_order[17][0]=XED_OPERAND_REG0;
xed_encode_order[17][1]=XED_OPERAND_REG1;
xed_encode_order[17][2]=XED_OPERAND_MEM0;
xed_encode_order[17][3]=XED_OPERAND_IMM0;
xed_encode_order_limit[17]=4;
xed_encode_order[27][0]=XED_OPERAND_MEM0;
xed_encode_order[27][1]=XED_OPERAND_REG0;
xed_encode_order[27][2]=XED_OPERAND_IMM0;
xed_encode_order_limit[27]=3;
xed_encode_order[21][0]=XED_OPERAND_REG0;
xed_encode_order[21][1]=XED_OPERAND_IMM0;
xed_encode_order_limit[21]=2;
xed_encode_order[6][0]=XED_OPERAND_REG0;
xed_encode_order[6][1]=XED_OPERAND_REG1;
xed_encode_order[6][2]=XED_OPERAND_REG2;
xed_encode_order[6][3]=XED_OPERAND_REG3;
xed_encode_order_limit[6]=4;
xed_encode_order[4][0]=XED_OPERAND_REG0;
xed_encode_order[4][1]=XED_OPERAND_REG1;
xed_encode_order[4][2]=XED_OPERAND_MEM0;
xed_encode_order_limit[4]=3;
}
