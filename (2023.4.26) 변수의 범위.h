#pragma once
#include <stdio.h> 


#pragma region ���� ����
// �Լ� �ܺο��� ����� ������ ���α׷� ��𿡼��� ���� �����ϸ�,
// ���α׷��� ����Ǿ�߸� �޸𸮿��� �����Ǵ� �����Դϴ�.

int globalValue = 5;

#pragma endregion

#pragma region ���� ����
// ���� ������ ���� ������ Ư¡�� ������ ������, 
// �� ���� �ʱ�ȭ�� �̷�����ϴ�.

static int attack;

void Calculator()
{
	static int value = 1;

	value += 1;

	printf("���� ���� value�� �� : %d\n", value);
}


#pragma endregion

void Function()
{
	int count = 0;

	count += 1;
	globalValue += 1;

	printf("count�� �� : %d\n", count);
	printf("globalValue�� �� : %d\n", globalValue);
}

void main()
{
#pragma region ���� ����
	// '���'{ } ������ ����� ������
	// ��� �������� ��ȿ�ϸ�, ����� ����Ǹ�
	// �޸𸮿��� ������� �����Դϴ�.

	// A ����
	// int data = 100;
	// 
	// { // B ����
	// 	int data = 20;
	// 	printf("B ���� data�� �� : %d\n", data);
	// }
	// 
	// printf("A ���� data�� �� : %d\n", data);
#pragma endregion

	// Function();
	// Function();
	// 
	// Calculator();
	// Calculator();
	// 
	// printf("���� ���� attack�� �� : %d", attack);

#pragma region ���� ������
	// �ڷ����� �������� ���� ���·� ��� �ڷ����� 
	// ������ �� �ִ� �������Դϴ�.

	// char charData = 'X';
	// int intData = 10;
	// 
	// void * ptr = NULL;
	// 
	// // ���� �����ʹ� �޸� �ּҿ� �����ؼ� ����
	// // ������ �� �����ϴ�.
	// ptr = &charData;
	// 
	// // ���� �����ͷ� ������ �޸𸮿� �����Ϸ��� ����
	// // �����Ͱ� ����Ű�� ������ �ڷ������� �� ��ȯ
	// // ���־�� �մϴ�.
	// *(char *)ptr = 'M';
	// printf("ptr�� ����Ű�� �� : %c\n", *(char*)ptr);
	// 
	// ptr = &intData;
	// 
	// *(int*)ptr = 99;
	// printf("ptr�� ����Ű�� �� : %d\n", *(int*)ptr);
#pragma endregion

#pragma region ���
	// ����) ���� �Է��� ������ ����� ����ϼ���.
	// 12 -> 1, 2, 3, 4, 6, 12

	// int number = 0;
	// 
	// scanf_s("%d", &number);
	// 
	// for (int i = 1; i <= number; i++)
	// {
	// 	if (number % i == 0)
	// 	{					
	// 		// 1, 2, 3, 4, 6, 12
	// 		printf("%d ", i);
	// 	}
	// }
#pragma endregion

#pragma region ShortCircuit
	// �� ���꿡�� �� �ǿ����� �� ��� ���ʸ� '��'
	// �̸� ������ �ǿ������� ���� ������ �ʰ� �ٷ� �����
	// ��� �����Դϴ�.

	// &&, || (�� ������)
	// &, |	  (��Ʈ ������)

	int x = 0;
	int y = 1;

	if (x == -1 && ++y == 2) {}

	printf("x�� �� : %d, y�� �� : %d\n", x, y);
#pragma endregion


}
