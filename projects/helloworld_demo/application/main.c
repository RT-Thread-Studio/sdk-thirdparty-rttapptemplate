#include "rtthread.h"

int main(int argc, char *argv[])
{
    rt_kprintf("hello RT-Thread app\n");

    while (1)
    {
        rt_thread_mdelay(1000);
    }

    return 0;
}
