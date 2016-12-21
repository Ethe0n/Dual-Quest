#pragma once

#include "cocos2d.h"
#include "CustomButton.h"

class LGameOption : public cocos2d::Layer 
{
public :
	LGameOption();

	virtual bool init();
private :
	CustomButton* exitButton;
};