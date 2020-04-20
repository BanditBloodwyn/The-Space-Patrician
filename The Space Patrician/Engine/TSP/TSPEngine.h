#pragma once


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