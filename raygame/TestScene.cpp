#include "TestScene.h"
#include "Player.h"
#include "Transform2D.h"
#include "MoveComponent.h"

void TestScene::start()
{

	// c# - base.Start()
	Scene::start();

	Player* player = new Player();
	
	MoveComponent* playerMove = (MoveComponent*)player->addComponent(new MoveComponent(50, player));

	MoveComponent* playerMove = new MoveComponent(50, player);

	player->addComponent(playerMove);

	playerMove->setVelocity({ 50, 0 });

	MathLibrary::Vector2 scale = MathLibrary::Vector2(50, 50);
	player->getTransform()->setScale(scale);

	addActor(player);
}
