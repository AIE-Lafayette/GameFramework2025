#include "TestScene.h"
#include "Player.h"
#include "Transform2D.h"

void TestScene::start()
{
	// c# - base.Start()
	Scene::start();

	Player* player = nullptr;

	MathLibrary::Vector2 scale = MathLibrary::Vector2(50, 50);
	player->getTransform()->setScale(scale);

	addActor(player);
}
