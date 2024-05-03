#pragma once
#include "../GameManager/ResourceManager.h"

class IPState {
public:
	virtual void Init() = 0;
	virtual void Update(float deltaTime) = 0;
	virtual void Render(sf::RenderWindow* window) = 0;
};