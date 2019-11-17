#ifndef ENGINE_GRAPIC_LAYOUT_NODE_H_
#define ENGINE_GRAPIC_LAYOUT_NODE_H_
class Node {
private:
	int sizeX;
	int sizeY;
	int posX;
	int posY;
protected:
	Node(int sizeX, int sizeY) : sizeX(sizeX), sizeY(sizeY), posX(0), posY(0)
	{ }
public:
	int getPosX() { return posX; }
	int getPosY() { return posY; }
	void setPosX(int posX) { this->posX = posX; }
	void setPosY(int posY) { this->posY = posY; }
	void setPosXY(int posX, int posY) {
		this->posX = posX;
		this->posY = posY;
	}

	int getSizeX() { return sizeX; }
	int getSizeY() { return sizeY; }
	void setSizeX(int sizeX) { this->sizeX = sizeX; }
	void setSizeY(int sizeY) { this->sizeY = sizeY; }
	void setSizeXY(int sizeX, int sizeY) {
		this->sizeX = sizeX;
		this->sizeY = sizeY;
	}
	Node& operator<<(Node& NextNode);
};

#endif // !ENGINE_GRAPIC_LAYOUT_NODE_H_


