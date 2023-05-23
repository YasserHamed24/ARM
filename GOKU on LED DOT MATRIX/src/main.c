#include "LSTD_TYPES.h"
#include "LBIT_MATH.h"
#include "MRCC_Interface.h"
#include "MGPIO_Interface.h"
#include "MSTK_Interface.h"
#include "HLED_MATRIX_Interface.h"


u8 GLOB_u8DataArr[8]  = {0, 0, 0, 0, 151, 126, 151, 0};
u8 GLOB_u8DataArr1[8] = {0, 0, 0, 0, 135, 126, 183, 0};
u8 GLOB_u8DataArr2[8] = {0, 0, 0, 0, 135, 126, 183, 48};
u8 GLOB_u8DataArr3[8] = {0, 0, 0, 0, 135, 126, 183, 72};

u8 GLOB_u8DataArr4[8] = {0, 0, 0, 48, 183, 126, 135, 0};
u8 GLOB_u8DataArr5[8] = {0, 0, 120, 48, 183, 126, 135, 0};
u8 GLOB_u8DataArr6[8] = {0, 120, 120, 48, 183, 126, 135, 0};

u8 GLOB_u8DataArr7[8] = {120, 120, 120, 48, 183, 126, 135, 0};
u8 GLOB_u8DataArr8[8] = {120, 120, 120, 120, 48, 183, 126, 135};

u8 GLOB_u8DataArr9[8] = {122, 252, 120, 120, 48, 183, 126, 135};
u8 GLOB_u8DataArr10[8] = {249, 122, 252, 120, 48, 183, 126, 135};



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

		HLEDMAT_voidDisplay(GLOB_u8DataArr);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr1);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr2);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr3);
		MSTK_voidDelayMs(2000);


		HLEDMAT_voidDisplay(GLOB_u8DataArr4);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr4);
		MSTK_voidDelayMs(2000);

		HLEDMAT_voidDisplay(GLOB_u8DataArr5);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr5);
		MSTK_voidDelayMs(2000);

		HLEDMAT_voidDisplay(GLOB_u8DataArr6);
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
		HLEDMAT_voidDisplay(GLOB_u8DataArr7);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr8);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr9);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr10);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr7);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr8);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr9);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr10);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr7);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr8);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr9);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr10);
		MSTK_voidDelayMs(2000);

		HLEDMAT_voidDisplay(GLOB_u8DataArr7);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr8);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr9);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr10);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr7);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr8);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr9);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr10);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr7);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr8);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr9);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr10);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr7);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr8);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr9);
		MSTK_voidDelayMs(2000);
		HLEDMAT_voidDisplay(GLOB_u8DataArr10);
		MSTK_voidDelayMs(2000);


	}
}


