#include "GameButton.h"

GameButton::GameButton()
{
	m_isHandling = false;
}

GameButton::~GameButton()
{
}

void GameButton::Init(std::string name)
{
	this->setTexture(DATA->getTexture("btn/" + name));
	this->setSize(sf::Vector2f(100, 100));
	//this->setFillColor(sf::Color::Green);
}

void GameButton::Update(float deltaTime)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
		HandleTouchEvent();
	}
}

void GameButton::Render(sf::RenderWindow* window)
{
	window->draw(*this);
}

void GameButton::HandleTouchEvent()
{
	m_isHandling = false;
	if (this->getGlobalBounds().contains((sf::Vector2f)sf::Mouse::getPosition(*WConnect->getWindow())))
	{
		m_btnClickFunc();
		m_isHandling = true;
	}
}

void GameButton::isHandle()
{
}

void GameButton::setOnClick(void(*Func)())
{
	m_btnClickFunc = Func;
}
