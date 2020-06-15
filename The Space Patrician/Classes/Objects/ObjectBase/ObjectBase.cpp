//////////////////////////////////////////////////////////////////////////////////////////////////
// Name:		ObjectBase.cpp
// Project:		The Space Patrician
// Purpose:		
//
// Created:		20.04.2020
// Author:		Kevin Eichenberg
//////////////////////////////////////////////////////////////////////////////////////////////////


#include "ObjectBase.h"


ObjectBase::ObjectBase()
{
	m_mSprites.clear();
}

ObjectBase::ObjectBase(long WorldPosX, long WorldPosY) : ObjectBase()
{
	m_WorldPosX = WorldPosX;
	m_WorldPosY = WorldPosY;
}

ObjectBase::~ObjectBase()
{
}

void ObjectBase::Move(olc::vf2d vDirection)
{

}

bool ObjectBase::Update()
{
	return true;
}

TSPContainer::XList<olc::Sprite> ObjectBase::GetAllSprites()
{
	return m_mSprites.Values();
}
