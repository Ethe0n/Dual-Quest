#include "Layer/LGameMap.h"
#include "Resources.h"

using namespace cocos2d;
using namespace std;

#define WIDTH 16
#define HEIGHT 9

LGameMap::LGameMap()
{
	init();
	autorelease();
}

bool LGameMap::init()
{
	Size winSize = Director::getInstance()->getWinSize();

	float tileWidth = winSize.width / WIDTH;
	float tileHeight = winSize.height / HEIGHT;
	const string path[3] = { "test1.png", "test2.png", "test3.png" };
	Sprite* tiles[HEIGHT][WIDTH];
	
	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			string test = Resources::getTilePath(path[rand() % 3]);
			tiles[i][j] = Sprite::create(test);
			Vec2 scale(tileWidth / tiles[i][j]->getBoundingBox().size.width, tileHeight / tiles[i][j]->getBoundingBox().size.height);
			tiles[i][j]->setScale(scale.x, scale.y);
			tiles[i][j]->setPosition(Vec2((0.5f + j) * tileWidth, (0.5 + i) * tileHeight));
			addChild(tiles[i][j]);
		}
	}

	return false;
}