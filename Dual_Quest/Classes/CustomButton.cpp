#include "CustomButton.h"
#include "Resources.h"

using namespace cocos2d;

CustomButton::CustomButton(std::string path, const cocos2d::ccMenuCallback& callback)
{
	normal = Sprite::create(path);
	selected = Sprite::create(path);
	selected->setOpacity(TRANSLUCENT);
	button = MenuItemSprite::create(normal, selected, callback);
}

CustomButton::CustomButton(std::string normalPath, std::string selectedPath, const cocos2d::ccMenuCallback& callback)
{
	normal = Sprite::create(normalPath);
	selected = Sprite::create(selectedPath);
	selected->setOpacity(TRANSLUCENT);
	button = MenuItemSprite::create(normal, selected, callback);
}