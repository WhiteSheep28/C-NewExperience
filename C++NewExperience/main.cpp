#include <iostream>

#include "Character.h"

using namespace std;

void main()
{
	const int nInputNum = 100; //��ü �迭 �� ����
	char cInputArrChar[100]; //ó�� �Է¹��� �迭
	int nCount = 0;

	cout << "�Է��Ͻ� �̸��� ���� �ּ���" << endl;
	cout << "�Է� : ";
	cin >> cInputArrChar;

	Character Hero(cInputArrChar, 100);
	Character CopyHero[nInputNum];

	while (nCount != 100)
	{
		CopyHero[nCount].CopyObject(Hero);
	}
}