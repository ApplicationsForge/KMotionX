#ifndef WINTYPES_OS_INDIPENDENT_H
#define WINTYPES_OS_INDIPENDENT_H

    #ifdef _WINDOWS

	#elif __APPLE__
		#include "ftdi/macosx/x86_64/WinTypes.h"
    #else
		#include "ftdi/linux/armhf/WinTypes.h"
    #endif
#endif
