#ifndef ENGINE_GRAPIC_TEXTFIELD_LAYOUTTEXTFIELD_H_
#define ENGINE_GRAPIC_TEXTFIELD_LAYOUTTEXTFIELD_H_

#include "../../Layout/Node.h"
#include "../TextField.h"


class LayoutTextField : public TextField {
private:
	int nowLine;
	Node& node;
public:
	LayoutTextField(int sizeX, int sizeY, Node& node) : TextField(sizeX, sizeY), nowLine(0), node(node)
	{  }

	void NewLine() override;
};


#endif // !ENGINE_GRAPIC_TEXTFIELD_LAYOUTTEXTFIELD_H_



