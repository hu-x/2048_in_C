/* keyboard.h */
#ifndef __H_KEYBOARD__
#define __H_KEYBOARD__


#include <windows.h>
#include "basic.h"

#define KeyDown(kc) GetAsyncKeyState(kc) & 0x8000 ? 1 : 0

typedef enum {
	KBD_ENTER, KBD_UP, KBD_DOWN, KBD_LEFT, KBD_RIGHT, KBD_ESC, KBD_UNKNOWN
} KEYTYPE;

KEYTYPE getKey();

#endif
