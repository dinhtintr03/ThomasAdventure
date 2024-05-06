#include "GSPlay.h"

GSPlay::GSPlay()
{
}

GSPlay::~GSPlay()
{
}

void GSPlay::Exit()
{
}

void GSPlay::Pause()
{
}

void GSPlay::Resume()
{
}

void GSPlay::Init()
{
	printf("Play Game");
	m_Background.Init();
	m_Player.Init();

	//m_bg.Init("/Background layers/Background", 100);
	//m_bg.setPosition(sf::Vector2i(screenWidth/2, scre))
}

void GSPlay::Update(float deltaTime)
{
	m_Background.Update(deltaTime);
	m_Player.Update(deltaTime);
}

void GSPlay::Render(sf::RenderWindow* window)
{
	m_Background.Render(window);
	m_Player.Render(window);
}
