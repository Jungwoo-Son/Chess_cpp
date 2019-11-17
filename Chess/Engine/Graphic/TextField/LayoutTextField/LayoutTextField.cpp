#include "LayoutTextField.h"

void LayoutTextField::NewLine() {
	COORD pos;

	pos.X = node.getPosX();
	pos.Y = node.getPosY() + nowLine;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	
	nowLine++;
}
