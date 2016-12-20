#include "Layer/LMainMenuButton.h"
#include "Resources.h"

using namespace cocos2d;

LMainMenuButton::LMainMenuButton()
{
	init();
	autorelease();
}

bool LMainMenuButton::init()
{
	Size winSize = Director::getInstance()->getWinSize();

	// create start button 
	Sprite* startButton_n = Sprite::create(Resources::getButtonPath("MainMenu_StartGame.png"));
	Sprite* startButton_s = Sprite::create(Resources::getButtonPath("MainMenu_StartGame.png"));
	startButton_s->setOpacity(TRANSLUCENT);
	startButton = MenuItemSprite::create(startButton_n, startButton_s, CC_CALLBACK_1(LMainMenuButton::startButtonCallback, this));
	
	// create load button
	Sprite* loadButton_n = Sprite::create(Resources::getButtonPath("MainMenu_LoadGame.png"));
	Sprite* loadButton_s = Sprite::create(Resources::getButtonPath("MainMenu_LoadGame.png"));
	loadButton_s->setOpacity(TRANSLUCENT);
	loadButton = MenuItemSprite::create(loadButton_n, loadButton_s, CC_CALLBACK_1(LMainMenuButton::loadButtonCallback, this));

	// create option button
	Sprite* optionButton_n = Sprite::create(Resources::getButtonPath("MainMenu_Option.png"));
	Sprite* optionButton_s = Sprite::create(Resources::getButtonPath("MainMenu_Option.png"));
	optionButton_s->setOpacity(TRANSLUCENT);
	optionButton = MenuItemSprite::create(optionButton_n, optionButton_s, CC_CALLBACK_1(LMainMenuButton::optionButtonCallback, this));

	// create exitButton
	Sprite* exitButton_n = Sprite::create(Resources::getButtonPath("MainMenu_ExitGame.png"));
	Sprite* exitButton_s = Sprite::create(Resources::getButtonPath("MainMenu_ExitGame.png"));
	exitButton_s->setOpacity(TRANSLUCENT);
	exitButton = MenuItemSprite::create(exitButton_n, exitButton_s, CC_CALLBACK_1(LMainMenuButton::exitButtonCallback, this));

	// create menu
	menu = Menu::create(startButton, loadButton, optionButton, exitButton, NULL);

	menu->alignItemsVerticallyWithPadding(50);
	menu->setPosition(Vec2(winSize.width / 2.0f, winSize.height * 0.3f));
	addChild(menu);

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