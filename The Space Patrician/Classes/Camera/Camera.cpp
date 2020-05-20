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

}

Camera::~Camera()
{

}

void Camera::MoveX(double dOffset)
{
	m_dPositionX += dOffset;
}

void Camera::MoveY(double dOffset)
{
	m_dPositionY += dOffset;
}
