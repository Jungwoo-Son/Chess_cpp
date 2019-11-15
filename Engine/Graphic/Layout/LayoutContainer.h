#ifndef ENGINE_GRAPIC_LAYOUT_LAYOUTCOINTAINER_H_
#define ENGINE_GRAPIC_LAYOUT_LAYOUTCOINTAINER_H_

#include <vector>

#include "Node.h"
#include "LayoutNode.h"

class LayoutContainer : public Node{
private:
	std::vector<std::vector<LayoutNode>> layoutMatrix;
public:
	LayoutContainer(std::vector<std::vector<LayoutNode>> layoutMatrix) : Node(0,0), layoutMatrix(layoutMatrix){
		for (auto& row : layoutMatrix) {
			for (auto& child : row) {
				if (this->getSizeX() < child.getSizeX())
					this->setSizeX(child.getSizeX());

				if (this->getSizeY() < child.getSizeY())
					this->setSizeY(child.getSizeY());
			}
		}

	}
};

#endif // !ENGINE_GRAPIC_LAYOUT_LAYOUTCOINTAINER_H_


