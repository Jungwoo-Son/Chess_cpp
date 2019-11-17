#ifndef ENGINE_GRAPIC_LAYOUT_LAYOUTNODE_H_
#define ENGINE_GRAPIC_LAYOUT_LAYOUTNODE_H_

#include <iostream>
#include <Windows.h>

#include "Node.h"
#include "../TextField/TextField.h"
#include "../TextField/LayoutTextField/LayoutTextField.h"

class LayoutNode : public Node, public LayoutTextField {
public:
	LayoutNode(int sizeX, int sizeY) : Node(sizeX, sizeY), LayoutTextField(sizeX, sizeY, *this) 
	{ }
	void printLayout();
};



#endif // !ENGINE_GRAPIC_LAYOUT_LAYOUTNODE_H_

