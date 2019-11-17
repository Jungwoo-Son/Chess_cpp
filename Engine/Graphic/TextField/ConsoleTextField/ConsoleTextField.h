#ifndef ENGINE_GRAPIC_TEXTFIELD_CONSOLETEXTFIELD_H_
#define ENGINE_GRAPIC_TEXTFIELD_CONSOLETEXTFIELD_H_

#include "../TextField.h"

class ConsoleTextField : public TextField{
public:
	ConsoleTextField(int sizeX, int sizeY) : TextField(sizeX, sizeY)
	{ }
	void NewLine() override;
};


#endif // ENGINE_GRAPIC_TEXTFIELD_CONSOLETEXTFIELD_H_


