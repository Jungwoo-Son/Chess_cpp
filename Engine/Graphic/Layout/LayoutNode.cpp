#include "LayoutNode.h"

void LayoutNode::printLayout() {
	COORD pos;
	HANDLE stdoutHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute(stdoutHandle, (int)foregColor + (int)backColor * 16);
	pos.X = posX;
	pos.Y = posY;
	SetConsoleCursorPosition(stdoutHandle, pos);
	for (int i = 0; i < sizeY; i++) {
		for (int j = 0; j < sizeX; j++) {
			putc(map[i][j], stdout);
		}
		pos.X = posX;
		pos.Y = posY + i + 1;
		SetConsoleCursorPosition(stdoutHandle, pos);
	}
}
