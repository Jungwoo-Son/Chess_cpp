#include "TextField.h"

TextField& TextField::operator<<(const std::wstring& str) {
	int it = 0;
	for (int i = 0; i < sizeY; i++) {
		for (int j = 0; j < sizeX; j++) { 
			it++;
			if (it > str.length())
				return *this;
				map[i][j] = str[it];
				if (it < 127)
					map[i][j] = ' ';
		}
		map[i][j] = '\0';
	}
	return *this;
}
