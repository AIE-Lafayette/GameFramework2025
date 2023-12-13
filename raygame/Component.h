#pragma once
class Actor;

class Component
{
public:

	Component();
	Component(Actor* owner, const char* name);


	virtual void start() {};
	virtual void update(float deltaTime) {};
	virtual void draw() {};
	virtual void end() {};

	virtual void onCollision(Actor* other) {};

	virtual void onDestroy() {};

	const char* getName() { return m_name; }

	Actor* getOwner() { return m_owner; }

private:
	const char* m_name;
	Actor* m_owner;
};

