#include "Layer/LMainMenuButton.h"

using namespace cocos2d;

LMainMenuButton::LMainMenuButton()
{
	init();
	autorelease();
}

bool LMainMenuButton::init()
{
	

	return false;
}

void LMainMenuButton::startButtonCallback(cocos2d::Ref* pSender)
{
	
}

void LMainMenuButton::loadButtonCallback(cocos2d::Ref* pSender)
{

}

void LMainMenuButton::optionButtonCallback(cocos2d::Ref* pSender)
{

}

void LMainMenuButton::exitButtonCallback(cocos2d::Ref* pSender)
{
	Director::getInstance()->end();
}