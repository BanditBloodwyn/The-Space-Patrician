#pragma once


#define OLC_PGE_APPLICATION
#include "../OLC/olcPixelGameEngine.h"


class TSPEngine : public olc::PixelGameEngine
{
public:
	TSPEngine();
	~TSPEngine();

public:
	bool OnUserCreate();
	bool OnUserUpdate(float fElapsedTime);
};