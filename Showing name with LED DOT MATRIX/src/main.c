#include "LSTD_TYPES.h"
#include "LBIT_MATH.h"
#include "MRCC_Interface.h"
#include "MGPIO_Interface.h"
#include "MSTK_Interface.h"
#include "HLED_MATRIX_Interface.h"
u8 GLOB_u8DataArrEMPTY[8]  = {0, 0, 0, 0, 0, 0, 0, 0};
u8 GLOB_u8DataArr[8]  = {1, 0, 0, 0, 0, 0, 0, 0};
u8 GLOB_u8DataArr1[8] = {2, 1, 0, 0, 0, 0, 0, 0};
u8 GLOB_u8DataArr2[8] = {28, 2, 1, 0, 0, 0, 0, 0};
u8 GLOB_u8DataArr3[8] = {2, 28, 2, 1, 0, 0, 0, 0};
u8 GLOB_u8DataArr4[8] = {1, 2, 28, 2, 1, 0, 0, 0};
u8 GLOB_u8DataArr5[8] = {0, 1, 2, 28, 2, 1, 0, 0};
u8 GLOB_u8DataArr6[8] = {31, 0, 1, 2, 28, 2, 1, 0};
u8 GLOB_u8DataArr7[8] = {5, 31, 0, 1, 2, 28, 2, 1};
u8 GLOB_u8DataArr8[8] = {31, 5, 31, 0, 1, 2, 28, 2};
u8 GLOB_u8DataArr9[8] = {0, 31, 5, 31, 0, 1, 2, 28};
u8 GLOB_u8DataArr10[8] = {23, 0, 31, 5, 31, 0, 1, 2};
u8 GLOB_u8DataArr11[8] = {21, 23, 0, 31, 5, 31, 0, 1};
u8 GLOB_u8DataArr12[8] = {29, 21, 23, 0, 31, 5, 31, 0};
u8 GLOB_u8DataArr13[8] = {0, 29, 21, 23, 0, 31, 5, 31};
u8 GLOB_u8DataArr14[8] = {23, 0, 29, 21, 23, 0, 31, 5};
u8 GLOB_u8DataArr15[8] = {21, 23, 0, 29, 21, 23, 0, 31};
u8 GLOB_u8DataArr16[8] = {29, 21, 23, 0, 29, 21, 23, 0};
u8 GLOB_u8DataArr17[8] = {0, 29, 21, 23, 0, 29, 21, 23};
u8 GLOB_u8DataArr18[8] = {31, 0, 29, 21, 23, 0, 29, 21};
u8 GLOB_u8DataArr19[8] = {21, 31, 0, 29, 21, 23, 0, 29};
u8 GLOB_u8DataArr20[8] = {21, 21, 31, 0, 29, 21, 23, 0};
u8 GLOB_u8DataArr21[8] = {0, 21, 21, 31, 0, 29, 21, 23};
u8 GLOB_u8DataArr22[8] = {31, 0, 21, 21, 31, 0, 29, 21};
u8 GLOB_u8DataArr23[8] = {13, 31, 0, 21, 21, 31, 0, 29};
u8 GLOB_u8DataArr24[8] = {23, 13, 31, 0, 21, 21, 31, 0};
u8 GLOB_u8DataArr25[8] = {0, 23, 13, 31, 0, 21, 21, 31};
u8 GLOB_u8DataArr26[8] = {0, 0, 23, 13, 31, 0, 21, 21};
u8 GLOB_u8DataArr27[8] = {0, 0, 0, 23, 13, 31, 0, 21};
u8 GLOB_u8DataArr28[8] = {0, 0, 0, 0, 23, 13, 31, 0};
u8 GLOB_u8DataArr29[8] = {0, 0, 0, 0, 0, 23, 13, 31};
u8 GLOB_u8DataArr30[8] = {0, 0, 0, 0, 0, 0, 23, 13};
u8 GLOB_u8DataArr31[8] = {0, 0, 0, 0, 0, 0, 0, 23};
void main(void)
{
	/*Step 1 : System Clock is 16 MHz From HSI*/
	MRCC_voidInitSystemClk();

	/*Step 2 : Enable GPIO Peripherial Clock For Port A*/
	MRCC_voidEnablePeripheralClock(AHB1,MRCC_PERIPHERAL_EN_GPIOA);

	/*Step 3 : Enable GPIO Peripherial Clock For Port B*/
	MRCC_voidEnablePeripheralClock(AHB1,MRCC_PERIPHERAL_EN_GPIOB);

	/*Step 4 : Initialize For LED Matrix*/
	HLEDMAT_voidInit() ;

	/* Loop forever */
	while(1)
	{
		/*Send Data To Led Matrix*/
		HLEDMAT_voidDisplay(GLOB_u8DataArrEMPTY);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArrEMPTY);
		MSTK_voidDelayMs(2000);

		HLEDMAT_voidDisplay(GLOB_u8DataArr);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr1);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr4);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr5);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr6);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr7);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr8);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr9);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr10);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr11);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr12);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr13);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr14);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr15);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr16);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr17);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr18);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr19);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr20);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr21);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr22);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr23);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr24);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr25);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr26);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr27);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr28);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr29);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr30);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr31);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArrEMPTY);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArrEMPTY);
		MSTK_voidDelayMs(2000);

	}
}


