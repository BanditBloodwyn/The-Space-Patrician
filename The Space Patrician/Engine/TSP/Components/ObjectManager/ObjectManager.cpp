//////////////////////////////////////////////////////////////////////////////////////////////////
// Name:		ObjectManager.cpp
// Project:		The Space Patrician
// Purpose:		
//
// Created:		20.04.2020
// Author:		Kevin Eichenberg
//////////////////////////////////////////////////////////////////////////////////////////////////


#include "ObjectManager.h"


ObjectManager::ObjectManager()
{
	m_mObjects.clear();
}

ObjectManager::~ObjectManager()
{
}

bool ObjectManager::CreateObject(long sObjectID)
{
	assert(m_mObjects.find(sObjectID) == m_mObjects.end());

	ObjectBase* pObject = new ObjectBase();
	m_mObjects[sObjectID] = pObject;

	return true;
}

TSPContainer::XList<ObjectBase*> ObjectManager::GetAllObjects()
{
	return m_mObjects.Values();
}
