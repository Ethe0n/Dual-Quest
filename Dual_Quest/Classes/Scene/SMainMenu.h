#pragma once

#include "cocos2d.h"

class SMainMenu : public cocos2d::Scene
{
public :
	SMainMenu();

	virtual bool init();

private :
	cocos2d::Layer* mainButtonLayer;
	cocos2d::Layer* mainBackgroundLayer;
};