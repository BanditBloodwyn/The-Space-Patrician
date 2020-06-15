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
	//bool result = TestRoutine(fElapsedTime);
	bool result = GameRoutine(fElapsedTime);

	if (result)
		DrawScreen();

	return result;
}

bool TSPEngine::GameRoutine(float fElapsedTime)
{
	////// INPUT //////
	if (GetKey(olc::ESCAPE).bPressed)
		return false;

	if (GetKey(olc::W).bHeld)
		m_pCamera->MoveY(10.0f * fElapsedTime);
	if (GetKey(olc::A).bHeld)
		m_pCamera->MoveX(-10.0f * fElapsedTime);
	if (GetKey(olc::S).bHeld)
		m_pCamera->MoveY(-10.0f * fElapsedTime);
	if (GetKey(olc::D).bHeld)
		m_pCamera->MoveX(10.0f * fElapsedTime);

	return true;
}

void TSPEngine::DrawScreen()
{
	Clear(olc::BLACK);
	
	DrawString({ 0, 0 }, m_pCamera->GetPositionString());

	for (auto gameObject : m_pObjectManager->GetAllObjects())
	{
		for (auto objectSprite : gameObject->GetAllSprites())
		{
			//DrawDecal(objectSprite)
		}
	}
}

#pragma region TestRoutines

bool TSPEngine::TestRoutine(float fElapsedTime)
{
	// called once per frame
	for (int x = 0; x < ScreenWidth(); x++)
		for (int y = 0; y < ScreenHeight(); y++)
			Draw(x, y, olc::Pixel(rand() % 256, rand() % 256, rand() % 256));



	return true;
}

#pragma endregion