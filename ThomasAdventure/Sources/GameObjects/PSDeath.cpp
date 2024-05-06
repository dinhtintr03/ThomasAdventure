#include "PSDeath.h"

PSDeath::PSDeath(IPlayer* player)
{
	m_Player = player;
}

void PSDeath::Init()
{
	m_Animation = new Animation(*DATA->getTexture("Character/Death"), sf::Vector2i(24, 1), 0.1f);
}

void PSDeath::Update(float deltaTime)
{
}

void PSDeath::Render(sf::RenderWindow* window)
{
}

void PSDeath::Reset()
{
}
