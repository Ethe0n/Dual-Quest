#include "Scene/SGame.h"

SGame::SGame() 
{
	mapLayer = new LGameMap();
	optionLayer = new LGameOption();
	init();
	autorelease();
}

bool SGame::init()
{
	addChild(mapLayer);
	addChild(optionLayer);

	return false;
}