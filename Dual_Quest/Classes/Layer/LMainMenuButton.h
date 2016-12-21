#pragma once

#include "cocos2d.h"
#include "CustomButton.h"

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
	CustomButton*	startButton;
	CustomButton*	loadButton;
	CustomButton*	optionButton;
	CustomButton*	exitButton;
	cocos2d::Menu*	menu;
	cocos2d::Layer*	loadLayer;
	cocos2d::Layer*	optionLayer;
};