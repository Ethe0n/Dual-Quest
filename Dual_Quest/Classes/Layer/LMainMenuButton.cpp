#include "Layer/LMainMenuButton.h"
#include "Layer/LMainMenuOption.h"
#include "Layer/LMainMenuLoad.h"
#include "Resources.h"
#include "Scene/SGame.h"

#include <vector>

using namespace std;
using namespace cocos2d;

LMainMenuButton::LMainMenuButton()
{
	loadLayer	= new LMainMenuLoad();
	optionLayer = new LMainMenuOption();
	init();
	autorelease();
}

bool LMainMenuButton::init()
{
	Size winSize = Director::getInstance()->getWinSize();

	// create buttons
	startButton		= new CustomButton(Resources::getButtonPath("MainMenu_StartGame.png"), CC_CALLBACK_1(LMainMenuButton::startButtonCallback, this));
	loadButton		= new CustomButton(Resources::getButtonPath("MainMenu_LoadGame.png"), CC_CALLBACK_1(LMainMenuButton::loadButtonCallback, this));
	optionButton	= new CustomButton(Resources::getButtonPath("MainMenu_Option.png"), CC_CALLBACK_1(LMainMenuButton::optionButtonCallback, this));
	exitButton		= new CustomButton(Resources::getButtonPath("MainMenu_ExitGame.png"), CC_CALLBACK_1(LMainMenuButton::exitButtonCallback, this));
	
	// create menu
	menu = Menu::create(startButton->getButton(), loadButton->getButton(), optionButton->getButton(), exitButton->getButton(), NULL);
	menu->alignItemsVerticallyWithPadding(50);
	menu->setPosition(Vec2(winSize.width / 2.0f, winSize.height * 0.3f));
	addChild(menu);

	// initialize
	addChild(optionLayer);
	addChild(loadLayer);

	return false;
}

void LMainMenuButton::startButtonCallback(cocos2d::Ref* pSender)
{
	Director::getInstance()->replaceScene(new SGame());
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