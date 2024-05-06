#include "PSJump.h"

PSJump::PSJump(IPlayer* player)
{
	m_Player = player;
	m_currentTime = 0.f;
}

void PSJump::Init()
{
	m_Animation = new Animation(*DATA->getTexture("Character/Jump"), sf::Vector2i(4, 1), 0.1f);
	// m_Animation->setModeEndFrame(true);
}

void PSJump::Update(float deltaTime)
{
	m_Animation->Update(deltaTime);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		m_Player->changeNextState(RUN);
	}
}

void PSJump::Render(sf::RenderWindow* window)
{
	window->draw(*m_Animation);
}

void PSJump::Reset()
{
	m_currentTime = 0;
	// m_Animation->Reset();
}
