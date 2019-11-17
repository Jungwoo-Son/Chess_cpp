#ifndef CHESS_CHESSNODE_H_
#define CHESS_CHESSNODE_H_


#include "../Engine/Graphic/Layout/LayoutNode.h"
#include "../Engine/Graphic/Color.h"

class ChessNode : public LayoutNode{

public:
	ChessNode(ColorCode cc) : LayoutNode(3, 3) {
		this->setColor(cc, cc);
	}



};

#endif // !CHESS_CHESSNODE_H_



