#include "GPIO.h"
#include "GPIO_Cfg.h"
#include "CAN.h"
#include "CAN_Cfg.h"
#include "CANManager.h"
#include "CANManager_Cfg.h"
#include <stdint.h>


int main(void)
{
    uint64_t Data;
    uint64_t* p;
    CANMgr_CheckType x;
    p = &Data;

    GPIO_Init();
    CAN_Init();
    CANMgr_WriteSignal(0, 0x0a);
            CANMgr_WriteSignal(1, 0x0a);
            do
            {
           x =  CANMgr_SendBuffer(0);
            }while(x == CANMgr_BUSY);
    while(1)
    {
        CANMgr_Cyclic();



    }
	return 0;
}


void CallBack1(void)
{
    uint8_t x = 0;
    x++;
}

void CallBack2(void)
{
    uint8_t y = 0;
    y++;
}
