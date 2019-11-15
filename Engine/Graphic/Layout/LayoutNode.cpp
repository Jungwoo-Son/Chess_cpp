#include "LayoutNode.h"

void LayoutNode::printLayout() {
	COORD pos;
	HANDLE stdoutHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute(stdoutHandle, (int)foregColor + (int)backColor * 16);
	pos.X = getPosX();
	pos.Y = getPosY();
	SetConsoleCursorPosition(stdoutHandle, pos);
	for (int i = 0; i < getSizeY(); i++) {
		for (int j = 0; j < getSizeX(); j++) {
			putc(map[i][j], stdout);
		}
		pos.X = getSizeX();
		pos.Y = getSizeY() + i + 1;
		SetConsoleCursorPosition(stdoutHandle, pos);
	}
}
