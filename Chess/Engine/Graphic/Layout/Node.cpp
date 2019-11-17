#include "Node.h"

Node& Node::operator<<(Node& NextNode) {
	NextNode.setPosXY(this->getPosX() + this->getSizeX(), this->getPosY());
	return NextNode;
}
