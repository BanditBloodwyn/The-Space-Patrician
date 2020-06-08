//////////////////////////////////////////////////////////////////////////////////////////////////
// Name:		TSPEngine.h
// Project:		The Space Patrician
// Purpose:		
//
// Created:		16.04.2020
// Author:		Kevin Eichenberg
//////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once


#include <OLC/olcPixelGameEngine.h>
#include "Components/GraphicsManager/GraphicsManager.h"
#include "Components/InputManager/InputManager.h"
#include "Components/ObjectManager/ObjectManager.h"
#include "Components/SoundManager/SoundManager.h"
#include <Universe/Universe.h>
#include <Camera/Camera.h>


class TSPEngine : public olc::PixelGameEngine
{
////////////////////////////////////////////
// structures
////////////////////////////////////////////


////////////////////////////////////////////
// construction
////////////////////////////////////////////
public:
	TSPEngine();
	~TSPEngine();


////////////////////////////////////////////
// methods
////////////////////////////////////////////
public:
	bool					OnUserCreate();
	bool					OnUserUpdate(float fElapsedTime);

	bool					GameRoutine(float fElapsedTime);
	bool					TestRoutine(float fElapsedTime);

	void					DrawScreen();


////////////////////////////////////////////
// attributes
////////////////////////////////////////////
private:
	GraphicsManager*		m_pGraphicsManager;
	InputManager*			m_pInputManager;
	ObjectManager*			m_pObjectManager;
	SoundManager*			m_pSoundManager;

	Universe*				m_pUniverse;

	Camera*					m_pCamera;
};