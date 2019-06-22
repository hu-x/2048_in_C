/* keyboard.c */

#include "keyboard.h"

KEYTYPE getKey(){
	system("pause > nul");
	KEYTYPE key = KBD_UNKNOWN;
	if(KeyDown(VK_RETURN))
		key = KBD_ENTER;
	if(KeyDown(VK_UP))
		key = KBD_UP;
	if(KeyDown(VK_DOWN))
		key = KBD_DOWN;
	if(KeyDown(VK_LEFT))
		key = KBD_LEFT;
	if(KeyDown(VK_RIGHT))
		key = KBD_RIGHT;
	if (KeyDown(VK_ESCAPE))
		key = KBD_ESC;
	return key;
}
