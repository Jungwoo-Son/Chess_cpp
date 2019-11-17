#ifndef ENGINE_GRAPIC_TEXTFIELD_H_
#define ENGINE_GRAPIC_TEXTFIELD_H_

#include <iostream>
#include <string>
#include <Windows.h>

#include "../Color.h"

class TextField { //������(x������) (�ܼ� ����)�� ĭ�� �� ĭ��
private:
	wchar_t** map;
	const int sizeX;
	const int sizeY;
	ColorCode foregColor;//���ڻ�
	ColorCode backColor;//����
protected:
	int getSizeX() { return sizeX; }
	int getSizeY() { return sizeY; }


public:
	TextField(const int sizeX, const int sizeY) : sizeX(sizeX), sizeY(sizeY),
		foregColor(ColorCode::WHITE), backColor(ColorCode::BLACK) {
		map = new wchar_t* [sizeY];
		for (int i = 0; i < sizeY; i++)
			map[i] = new wchar_t[sizeX];
	}
	~TextField() {
		for (int i = 0; i < sizeY; i++) {
			delete[] (map[i]);
		}
		delete[] map;
	}
	void setColor(ColorCode foregColor, ColorCode backColor);
	void print();
	virtual void NewLine() = 0;
	TextField& operator<<(const std::wstring& str);
};

#endif // !ENGINE_GRAPIC_LAYOUT_TEXTFIELD_H_


