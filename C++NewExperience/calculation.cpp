#pragma warning (disable:4996)

#include <iostream>
#include <string.h>

#include "Character.h"

using namespace std;

int Character::m_nNum = 0;

Character::Character()
{

}

Character::Character(const char* pName, const int nLife)
{
	m_nLenth = strlen(pName);
	m_pName = new char(m_nLenth + 2);
	strcpy(m_pName, pName);
	m_nLife = nLife;
	
	Character::Print();
}

Character::~Character()
{

}

void Character::ChangeNumber()
{
	m_nNum++;
	int nNum = m_nNum;
	int nNumCount = 0;

	while (nNum == 0)
	{
		nNum % 10;
		nNumCount++;
	}

}

void Character::CopyObject(const Character& obj)
{
	m_pName = obj.m_pName;
	m_nLife = obj.m_nLife;

	ChangeNumber();
}

void Character::Print()
{
	cout << "이름 : " << m_pName << " 생명력 : " << m_nLife << endl;

	delete(m_pName);
}

