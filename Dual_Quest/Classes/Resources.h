#pragma once

#include "cocos2d.h"

#define BACKGROUND_PATH "Sprite/Background/"
#define BUTTON_PATH		"Sprite/Button/"
#define TILE_PATH		"Sprite/Tile/"
#define TRANSLUCENT		128 

class Resources
{
public:
	static std::string getBackgroundPath(std::string path) { return BACKGROUND_PATH + path; }
	static std::string getButtonPath(std::string path) { return BUTTON_PATH + path; }
	static std::string getTilePath(std::string path) { return TILE_PATH + path; }
private:

};