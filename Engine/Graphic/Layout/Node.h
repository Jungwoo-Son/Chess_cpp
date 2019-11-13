#ifndef ENGINE_GRAPIC_LAYOUT_NODE_H_
#define ENGINE_GRAPIC_LAYOUT_NODE_H_
class Node {
private:
	int sizeX;
	int sizeY;
	int posX;
	int posY;
protected:
	int getPosX() { return posX; }
	int getPosY() { return posY; }
	void setPosX(int posX) { this->posX = posX; }
	void setPosY(int posY) { this->posY = posY; }

	int getSizeX() { return sizeX; }
	int getSizeY() { return sizeY; }
	Node(int sizeX, int sizeY) : sizeX(sizeX), sizeY(sizeY), posX(0), posY(0)
	{ }
};

#endif // !ENGINE_GRAPIC_LAYOUT_NODE_H_


