//////////////////////////////////////////////////////////////////////////////////////////////////
// Name:		TSPEngine.cpp
// Project:		The Space Patrician
// Purpose:		
//
// Created:		16.04.2020
// Author:		Kevin Eichenberg
//////////////////////////////////////////////////////////////////////////////////////////////////


#define OLC_PGE_APPLICATION
#include "TSPEngine.h"


TSPEngine::TSPEngine()
{
	sAppName = "Example";

	m_pGraphicsManager	= new GraphicsManager();
	m_pInputManager		= new InputManager();
	m_pObjectManager	= new ObjectManager();
	m_pSoundManager		= new SoundManager();
}

TSPEngine::~TSPEngine()
{

}

bool TSPEngine::OnUserCreate()
{
	// Called once at the start, so create things here
	return true;
}

bool TSPEngine::OnUserUpdate(float fElapsedTime)
{
	// called once per frame
	for (int x = 0; x < ScreenWidth(); x++)
		for (int y = 0; y < ScreenHeight(); y++)
			Draw(x, y, olc::Pixel(rand() % 100, rand() % 100, rand() % 100));
	return true;
}
