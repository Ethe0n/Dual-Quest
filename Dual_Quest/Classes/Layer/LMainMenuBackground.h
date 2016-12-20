#pragma once

#include "cocos2d.h"

class LMainMenuBackground : public cocos2d::Layer
{
public :
	LMainMenuBackground();

	virtual bool init();
private :
	cocos2d::Sprite* background;
};