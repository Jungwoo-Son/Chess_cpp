#include "TextField.h"

void TextField::setColor(ColorCode foregColor, ColorCode backColor) {
	this->foregColor = foregColor;
	this->backColor = backColor;
}

void TextField::print() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (int)foregColor + (int)backColor * 16);//배경색, 글자색 설정

	for (int i = 0; i < sizeY; i++) {
		for (int j = 0; j < sizeX; j++) {
			std::wcout << map[i][j];
			if (map[i][j] < 127)
				std::wcout << ' ';
		} NewLine();
	}
}

TextField& TextField::operator<<(const std::wstring& str) {
	size_t it = 0;
	for (int i = 0; i < sizeY; i++) {
		for (int j = 0; j < sizeX; j++) { 
			if (it > str.length())
				return *this;
			map[i][j] = str[it];
			it++;
		}
	}
	return *this;
}
