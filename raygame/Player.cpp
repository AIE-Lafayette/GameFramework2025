#include "Player.h"
#include "raylib.h"
#include "Transform2D.h"

void Player::draw()
{
	MathLibrary::Vector2 position = getTransform()->getWorldPosition();
	float radius = getTransform()->getScale().x;

	DrawCircle(position.x, position.y, radius, RED);
}
