#pragma once
#include <stdio.h> 

void main()
{
#pragma region ��� ���� ������
	// ������ ������ ����� �����Ͽ�, ������ ������
	// ����Ű�� �ִ� �ּҿ� �����ϴ� ���� ������ ��
	// ������ �����ϴ� ���ȭ�Դϴ�.

	// int data = 100;
	// int data1 = 20;
	// 
	// const int * ptr = &data;
	// 
	// printf("ptr ������ �� : %p\n", ptr);
	// // *ptr = 300; (������ ���� �������� ���ȭ�� �Ǿ��� ������)
	// //                       ERROR�� �߻���ŵ�ϴ�.
	// 
	// ptr = &data1;
	// 
	// printf("ptr ������ �� : %p\n", ptr);
	// 
#pragma endregion

#pragma region ������ ���
	// ����� ������ �������̹Ƿ�, �ش� ������ ���� ������ �� ������,
	// �ٸ� ������ �ּ� ���� ����ų �� �ֽ��ϴ�.

	// int value1 = 30;
	// int value2 = 60;
	// 
	// int * const ptr1 = &value1;
	// 
	// printf("value1�� �� : %d\n", value1);
	// 
	// *ptr1 = 99999; // (OK)
	// 
	// printf("value1�� �� : %d\n", value1);
	// 
	// ptr1 = &value2; (Error)

#pragma endregion

#pragma region sizeof(�ڷ���)

	// float health = 66.5f;
	// short * pointer = NULL;	// ������ ���� (8 BYTE)
	// 
	// printf("char�� ũ�� : %d\n", sizeof(char));
	// printf("short�� ũ�� : %d\n", sizeof(short));
	// printf("int�� ũ�� : %d\n", sizeof(int));
	// printf("long�� ũ�� : %d\n", sizeof(long));
	// 
	// printf("float�� ũ�� : %d\n", sizeof(health));
	// printf("double�� ũ�� : %d\n", sizeof(double));
	// printf("long double�� ũ�� : %d\n", sizeof(long double));
	// 
	// printf("Pointer�� ũ�� : %d\n", sizeof(pointer)); 

#pragma endregion

#pragma region ������

	// 2 * 1 = 2 
	// ~
	// 2 * 9 = 18

	// 9 * 9 = 81

	// HINT 
	// 2�� for��

	// for (int i = 1; i <= 9; i++)
	// {
	// 	for (int j = 1; j <= 9; j++)
	// 	{
	// 		printf("%d x %d = %d\n", i, j, i * j);
	// 	}
	// 
	// 	printf("\n");
	// }



#pragma endregion

#pragma region scanf(�Է� �Լ�)
	// ǥ�� �Է� �Լ���, ���� ������ �����͸�
	// �پ��� ���Ŀ� ���߾� �Է����ִ� �Լ��Դϴ�.

	// scanf <- SDL �˻� ������ ���ϰ� ����ϰ� �Ǹ�
	//          ERROR �߻�

	// 	scanf_s("�Է��� ������ ����", &����)

	// int count = 0;
	// 
	// printf("count ������ ���� �Է����ּ���.");
	// 
	// scanf_s("%d", &count);
	// 
	// // ǥ�� �Է� �Լ��� �Է��� ������ ������ ����
	// // �۾����� �Ѿ �� �����ϴ�.
	// printf("count ������ �� : %d", count);

	// �� ���
	// ����) ���� �Է��� ���� ���� ���� �������� �������ּ���.
	// ex) 5 �Է�
	// ��
	// �١�
	// �١١�
	// �١١١�
	// �١١١١�	  

	int count = 0;

	scanf_s("%d", &count);

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("��");
		}

		printf("\n");
	}
#pragma endregion

}
