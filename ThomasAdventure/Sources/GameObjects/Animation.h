#pragma once
#include "SFML/Graphics.hpp"
#include "../GameConfig.h"

class Animation :public sf::Sprite {
public:
	Animation(sf::Texture &texture, sf::Vector2i frameNum, float frameTime);
	void CalculateRectSize();
	void CalculateRectUV();
	void ApplyRect();
	virtual void Update(float dataTime);
	

	

	sf::Vector2i getFrameNum() { return m_frameNum; }
	sf::Vector2i getCurrentFrame() { return m_currentFrame; }
protected:
	sf::Vector2i m_frameNum;
	sf::Vector2i m_currentFrame;

	float m_frameTime;
	float m_currentTime;

	sf::Vector2i m_rectUV;
	sf::Vector2i m_rectSize;
	sf::IntRect m_rect;

	bool m_modeStopAtEndFrame;
};