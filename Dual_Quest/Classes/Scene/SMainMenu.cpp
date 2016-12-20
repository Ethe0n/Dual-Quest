#include "Scene/SMainMenu.h"
#include "Layer/LMainMenuButton.h"
#include "Layer/LMainMenuBackground.h"

SMainMenu::SMainMenu()
{
	init();
	autorelease();
}

bool SMainMenu::init()
{
	mainBackgroundLayer = new LMainMenuBackground();
	mainButtonLayer = new LMainMenuButton();

	addChild(mainBackgroundLayer);
	addChild(mainButtonLayer);

	return false;
}