#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <string.h>

void Function()
{
	printf("Function() �Լ�\n");
}

void DataList()
{
	printf("DataList() �Լ�\n");
}

int Damage(int x)
{
	return x;
}

void Sort(void (*fPrt)()) // ��������, ��������
{
	fPrt();
}

#pragma region typedef

typedef unsigned int UINT;

typedef struct Player
{
	int x;
	int y;
	char name[10];
}Player1;

#pragma endregion

int main()
{
#pragma region �Լ� ������
	// �Լ��� �ּڰ��� �����ϰ� ����ų �� �ִ�
	// �����Դϴ�.

	// �Լ��� �̸��� �Լ��� �ּҸ� �ǹ��մϴ�.
	// printf("Function()�� �ּڰ� : %p\n", Function);

	// �Լ� ������ ����
	// void (*fPtr) ();
	// int (*intfPtr) (int);
	// 
	// fPtr = Function;
	// intfPtr = Damage;
	// 
	// fPtr();
	// printf("intfPtr�� �� : %d\n", intfPtr(10));
	// 
	// fPtr = DataList;
	// 
	// fPtr();
	// 
	// Sort(Function);

	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű������� Ÿ����
	// ��ġ�ؾ� �ϹǷ�, �Լ� �����͸� ����Ͽ� ��������
	// �޸𸮸� �Ҵ��� �� �����ϴ�.

	// fPtr = Damage; 
	// printf("fPtr�� �� : %d", fPtr(10)); Error

#pragma endregion

#pragma region typedef
	// UINT count = 100;
	// unsigned int value = 9999;
	// 
	// printf("count�� �� : %d\n", count);
	// 
	// Player1 player1;
	// player1.x = 10;
	// player1.y = 5;
	// 
	// 
	// // �迭�� �ּ� <-
	// // [A][l][i][s][t][a][t][][] <- [A][l][i]......
	// // ù ��° �Ű����� : ������� ���� �迭
	// // �� ��° �Ű����� : �����ϴ� ���� �迭
	// strcpy(player1.name, "Alistar");
	// 
	// printf("player1.x�� �� : %d\n", player1.x);
	// printf("player1.name : %s\n", player1.name);
	// printf("Player1�� �޸� ũ�� : %u\n", sizeof(player1));
#pragma endregion

	return 0;
}
