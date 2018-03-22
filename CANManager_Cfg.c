#include "CANManager.h"
#include "CANManager_Cfg.h"

void CallBack1(void);
void CallBack2(void);

const SignalParameters SIG_ConfigParam [Signal_Groups_Number]=
{
    {
        0,
        0,
        3,
        0,
        &CallBack1
    },
    {
        0,
        4,
        7,
        0,
        &CallBack2
    }
};
