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

}

TSPEngine::~TSPEngine()
{

}

bool TSPEngine::OnUserCreate()
{
	// Called once at the start, so create things here
	
	m_pGraphicsManager = new GraphicsManager();
	m_pInputManager = new InputManager();
	m_pObjectManager = new ObjectManager();
	m_pSoundManager = new SoundManager();

	m_pUniverse = new Universe();
	m_pUniverse->Create();

	m_pCamera = new Camera();

	return true;
}

bool TSPEngine::OnUserUpdate(float fElapsedTime)
{
	bool result = TestRoutine();
	//bool result = DrawScreen();	
	
	return result;
}

bool TSPEngine::DrawScreen()
{
	Clear(olc::BLACK);

	return true;
}

#pragma region TestRoutines

bool TSPEngine::TestRoutine()
{
	// called once per frame
	for (int x = 0; x < ScreenWidth(); x++)
		for (int y = 0; y < ScreenHeight(); y++)
			Draw(x, y, olc::Pixel(rand() % 256, rand() % 256, rand() % 256));

	if (GetKey(olc::ESCAPE).bPressed)
		return false;

	return true;
}

#pragma endregion