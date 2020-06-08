//////////////////////////////////////////////////////////////////////////////////////////////////
// Name:		Camera.cpp
// Project:		The Space Patrician
// Purpose:		
//
// Created:		20.05.2020
// Author:		Kevin Eichenberg
//////////////////////////////////////////////////////////////////////////////////////////////////


#include "Camera.h"


Camera::Camera()
{
	m_dPositionX = 0;
	m_dPositionY = 0;

	m_bLockOnPlayer = false;
}

Camera::~Camera()
{

}

void Camera::Update(float fPlayerPositionX, float fPlayerPositionY)
{
	if(m_bLockOnPlayer)
	{
		m_dPositionX = fPlayerPositionX;
		m_dPositionY = fPlayerPositionY;
	}
}

void Camera::MoveX(float dOffset)
{
	m_dPositionX += dOffset;
}

void Camera::MoveY(float dOffset)
{
	m_dPositionY += dOffset;
}

void Camera::CenterPlayer(float fPlayerPositionX, float fPlayerPositionY)
{
	m_dPositionX = fPlayerPositionX;
	m_dPositionY = fPlayerPositionY;

}

void Camera::LockOnPlayer(bool bLock)
{
	m_bLockOnPlayer = bLock;
}

std::string Camera::GetPositionString()
{
	return "X: " + std::to_string(m_dPositionX) + " , Y: " + std::to_string(m_dPositionY);
}
