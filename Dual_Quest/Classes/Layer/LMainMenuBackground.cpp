#include "Layer/LMainMenuBackground.h"
#include "Resources.h"

using namespace cocos2d;

LMainMenuBackground::LMainMenuBackground()
{
	init();
	autorelease();
}

bool LMainMenuBackground::init()
{
	Size winSize = Director::getInstance()->getWinSize();
	background = Sprite::create(Resources::getBackgroundPath("MainMenu_Background.png"));

	background->setPosition(Vec2(winSize.width / 2.0f, winSize.height / 2.0f));
	
	addChild(background);

	return false;
}