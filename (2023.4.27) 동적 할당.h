#pragma once
#include <stdio.h> 
#include <malloc.h>

void main()
{
#pragma region ���� �Ҵ�
	// ���α׷��� ���� �߿� �ʿ��� ��ŭ
	// �޸𸮸� �Ҵ��ϴ� �۾��Դϴ�.

	// ���� �Ҵ��� ���� �ð��� ���������� �޸���
	// ũ�⸦ �����ų �� ������, �������� �޸���
	// ũ�⸦ �Ҵ��� �� ����Ʈ ������ �����մϴ�.

	// int * ptr = (int *)malloc(sizeof(int));

	// // �޸� ���� �Ҵ��� �� �ּҸ� ���� �����ͷ� ��ȯ�ϱ�
	// // ������ �ڷ����� ��ȯ�� ���� �޸𸮿� �Ҵ��ؾ� �մϴ�.
	// *ptr = 1000;
	// 
	// printf("���� �Ҵ��� �޸� �ȿ� �ִ� �� : %d\n", *ptr);

	// // �޸� ���� 
	// free(ptr);

	// �̹� ������ �޸𸮸� �����ϸ� Error�� �߻��մϴ�.
	// free(ptr);

#pragma endregion

#pragma region ASCII �ڵ�
	// ���� ���ĺ��� ����ϴ� ��ǥ���� ���� ���ڵ��Դϴ�.

	// char alphabet = 65;
	// 
	// printf("ASCII �ڵ� ���� �� : %d\n", alphabet);
	// printf("ASCII �ڵ� ���� �� : %c\n", alphabet);
	// 
	// // ����) ���ĺ� (�ҹ���) a ~ z ���� ������ּ���. 
	// for (int i = 0; i <= 25; i++)
	// {
	// 	printf("%c ", 97 + i);
	// }
#pragma endregion

#pragma region ��� ������
	// �̹� ������ �޸� ������ ����Ű�� �������Դϴ�.

	// int * intPtr = malloc(sizeof(int));
	// 
	// *intPtr = 300;
	// 
	// printf("intPtr�� ����Ű�� �� : %d\n", *intPtr);
	// 
	// free(intPtr);
	// 
	// printf("������ intPtr�� ����Ű�� �� : %d\n", *intPtr);
	// 
	// intPtr = NULL;
	// 
	// *intPtr = 100;
#pragma endregion

#pragma region ���� ������

	// int a = 100;
	// int * aptr = &a;
	// int ** daptr = &aptr;

	// int b = 200;
	// int * bptr = &b;
	// int** dbPtr = &bptr;

	// int temp = 0;

	// // 200 <- 200
	//   temp = **dbPtr;

	// // 100 <- 100
	// **dbPtr = **daptr;

	// // 200 <-  200
	// **daptr = temp;

	// printf("a�� �� : %d, b�� �� : %d\n", a, b);
	// printf("daptr�� �� : %d, dbPtr�� �� : %d\n", **daptr, **dbPtr);

	// printf("*dptr�� �� : %p\n", *daptr);
	// printf("**dptr�� �� : %d\n", **daptr);

#pragma endregion

}
