#pragma once
#include "GameStateBase.h"
#include "../GameObjects/ParallelBackground.h"

class GSPlay : public GameStateBase
{
public:
	GSPlay();
	virtual ~GSPlay();

	void Exit();
	void Pause();
	void Resume();

	void Init();
	void Update(float deltaTime);
	void Render(sf::RenderWindow* window);
private:
	ParallexBackground m_Background;
};