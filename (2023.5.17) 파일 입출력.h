#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
#pragma region ���� �����


	// ���� ����
	// fopen("������ �̸�.Ȯ����", ���� ���)
	// w : ����
	// r : �б�

	// �ؽ�Ʈ ������ (w)����� ���� �����ݴϴ�.
	// FILE* filePtr = fopen("DB. txt", "w");
	// 
	// fputs("ID\n", filePtr);
	// fputs("Password\n", filePtr);
	// 
	// // ���� ������ �ݱ�
	// fclose(filePtr);

	int screen = 1;

	// screen = 1 FULL SCREEN MODE
	// screen = 2 WINDOW MODE
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), screen, 0);

	FILE* readPtr = NULL;

	// ���� �б�
	while (1)
	{
		readPtr = fopen("Monster.txt", "r");

		char buffer[10000] = { 0, };

		fread(buffer, 1, 10000, readPtr); // ���� ��ü �б�
		printf("%s", buffer);

		system("cls");

		if (GetAsyncKeyState(VK_SPACE))
		{
			exit(0);
		}
	}

	fclose(readPtr);

#pragma endregion




	return 0;
}
