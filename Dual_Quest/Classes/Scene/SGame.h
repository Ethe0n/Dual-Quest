#pragma once

#include "cocos2d.h"
#include "Layer/LGameMap.h"
#include "Layer/LGameOption.h"

class SGame : public cocos2d::Scene
{
public :
	SGame();

	virtual bool init();
private :
	LGameMap* mapLayer;
	LGameOption* optionLayer;
};