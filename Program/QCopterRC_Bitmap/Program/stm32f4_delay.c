/*=====================================================================================================*/
/*=====================================================================================================*/
#include "stm32f4_system.h"
#include "stm32f4_delay.h"
/*=====================================================================================================*/
/*=====================================================================================================*
**函數 : Delay_nop
**功能 : 延遲一個while時間
**輸入 : nCnt
**輸出 : None
**使用 : Delay_nop(Times);
**=====================================================================================================*/
/*=====================================================================================================*/
void Delay_nop( u32 nCnt )
{
  while(nCnt--) {
  }
}
/*=====================================================================================================*/
/*=====================================================================================================*
**函數 : Delay_1us
**功能 : 延遲 1us
**輸入 : nCnt_1us
**輸出 : None
**使用 : Delay_1us(Times);
**=====================================================================================================*/
/*=====================================================================================================*/
void Delay_1us( u32 nCnt_1us )
{
  u32 nCnt;
  for(; nCnt_1us != 0; nCnt_1us--)
    for(nCnt = 45; nCnt != 0; nCnt--);
}
/*=====================================================================================================*/
/*=====================================================================================================*
**函數 : Delay_10us
**功能 : 延遲 10us
**輸入 : nCnt_10us
**輸出 : None
**使用 : Delay_10us(Times);
**=====================================================================================================*/
/*=====================================================================================================*/
void Delay_10us( u32 nCnt_10us )
{
  u32 nCnt;
  for(; nCnt_10us != 0; nCnt_10us--)
    for(nCnt = 556; nCnt != 0; nCnt--);
}
/*=====================================================================================================*/
/*=====================================================================================================*
**函數 : Delay_100us
**功能 : 延遲 100us
**輸入 : nCnt_100us
**輸出 : None
**使用 : Delay_100us(Times);
**=====================================================================================================*/
/*=====================================================================================================*/
void Delay_100us( u32 nCnt_100us )
{
  u32 nCnt;
  for(; nCnt_100us != 0; nCnt_100us--)
    for(nCnt = 5400; nCnt != 0; nCnt--);
}
/*=====================================================================================================*/
/*=====================================================================================================*
**函數 : Delay_1ms
**功能 : 延遲 1ms
**輸入 : nCnt_1ms
**輸出 : None
**使用 : Delay_1ms(Times);
**=====================================================================================================*/
/*=====================================================================================================*/
void Delay_1ms( u32 nCnt_1ms )
{
  u32 nCnt;
  for(; nCnt_1ms != 0; nCnt_1ms--)
    for(nCnt = 56580; nCnt != 0; nCnt--);
}
/*=====================================================================================================*/
/*=====================================================================================================*
**函數 : Delay_10ms
**功能 : 延遲 10ms
**輸入 : nCnt_10ms
**輸出 : None
**使用 : Delay_10ms(Times);
**=====================================================================================================*/
/*=====================================================================================================*/
void Delay_10ms( u32 nCnt_10ms )
{
  u32 nCnt;
  for(; nCnt_10ms != 0; nCnt_10ms--)
    for(nCnt = 559928; nCnt != 0; nCnt--);
}
/*=====================================================================================================*/
/*=====================================================================================================*
**函數 : Delay_100ms
**功能 : 延遲 100ms
**輸入 : nCnt_100ms
**輸出 : None
**使用 : Delay_100ms(Times);
**=====================================================================================================*/
/*=====================================================================================================*/
void Delay_100ms( u32 nCnt_100ms )
{
  u32 nCnt;
  for(; nCnt_100ms != 0; nCnt_100ms--)
    for(nCnt = 5655000; nCnt != 0; nCnt--);
}
/*=====================================================================================================*/
/*=====================================================================================================*/
