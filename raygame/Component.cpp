#include "Component.h"

Component::Component()
{
	m_name = nullptr;
	m_owner = nullptr;
}

Component::Component(Actor* owner, const char* name)
{
	m_owner = owner;
	m_name = name;
}

Component::~Component()
{
	delete[] m_name;
}
