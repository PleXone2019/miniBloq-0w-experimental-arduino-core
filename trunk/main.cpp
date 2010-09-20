//#include "CPPLib.h"
#include "WProgram.h"
#include "main.pde"

//Arduino-like main:
int main(void)
{
	init();

	setup();

	for (;;)
		loop();

	return 0;
}



/*
//WinAVR C++ conventional main:
int main()
{
    while(true)
    {
    }

    return 0;
}
*/
