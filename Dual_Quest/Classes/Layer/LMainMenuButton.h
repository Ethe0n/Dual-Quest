#pragma once

#include "cocos2d.h"

class LMainMenuButton : public cocos2d::Layer
{
public :
	LMainMenuButton();

	virtual bool init();

	void startButtonCallback(cocos2d::Ref* pSender);
	void loadButtonCallback(cocos2d::Ref* pSender);
	void optionButtonCallback(cocos2d::Ref* pSender);
	void exitButtonCallback(cocos2d::Ref* pSender);
private :
	cocos2d::MenuItemSprite*	startButton;
	cocos2d::MenuItemSprite*	loadButton;
	cocos2d::MenuItemSprite*	optionButton;
	cocos2d::MenuItemSprite*	exitButton;
	cocos2d::Menu*				menu;
};