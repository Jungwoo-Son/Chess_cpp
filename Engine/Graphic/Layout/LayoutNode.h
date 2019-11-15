#ifndef ENGINE_GRAPIC_LAYOUT_LAYOUTNODE_H_
#define ENGINE_GRAPIC_LAYOUT_LAYOUTNODE_H_

#include <iostream>
#include <Windows.h>

#include "Node.h"
#include "../Color.h"
#include "LayoutContainer.h"

class LayoutNode : public Node {
private:
	char** map;
	ColorCode foregColor;//글자색
	ColorCode backColor;//배경색
public:
	LayoutNode(int sizeX, int sizeY, ColorCode foregColor, ColorCode backColor) : Node(sizeX, sizeY)
		, foregColor(foregColor), backColor(backColor) {
		map = new char*[sizeY];
		for (int i = 0; i < sizeY; i++)
			map[i] = new char[sizeX];
	}
	void printLayout();
};



#endif // !ENGINE_GRAPIC_LAYOUT_LAYOUTNODE_H_

