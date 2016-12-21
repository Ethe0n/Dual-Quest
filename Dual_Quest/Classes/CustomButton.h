#pragma once

#include "cocos2d.h"

class CustomButton : public cocos2d::MenuItemSprite
{
public :
	CustomButton(std::string path, const cocos2d::ccMenuCallback& callback);
	CustomButton(std::string normalPath, std::string selectedPath, const cocos2d::ccMenuCallback& callback);
	cocos2d::MenuItem* getButton() { return button; }
private :
	cocos2d::Sprite*	normal;
	cocos2d::Sprite*	selected;
	cocos2d::MenuItem*	button;
};