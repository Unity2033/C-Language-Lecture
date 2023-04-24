#include <stdio.h> 


#pragma region �Լ�
// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
// ���������� ����� �ڵ��� �����Դϴ�.

// void : ���� ��ȯ���� �ʴ� �ڷ���
void Attack()
{
	for (int i = 0; i < 5; i++)
	{
		printf("����\n");
	}
}

// ��ȯ�� : �Լ��� ����Ǿ��� �� ���� ��ȯ���ִ� �����Դϴ�.
int Function()
{
	return 100;
}

// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°� ��ġ����
// ������ ���ϴ� ���� ���� �� �����ϴ�.
int ProcessInt()
{
	return 67.5f;
}

// �Լ��� ���� �̸��� �Լ��� �ߺ����� ������ �� �����ϴ�.

#pragma endregion

#pragma region �Ű� ����
// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ�
// ���� ����ϴ� �����Դϴ�.
void Calculator(int x)
{
	printf("�Ű� ���� x�� �� : %d\n", x);
}

int Add(int x, int y)
{
	return x + y;
}

#pragma endregion

// ���� ���� ���� (�Լ�) 
void Swap(int x, int y)
{
	int temp = 0;

	printf("Swap �� -> x�� �� : %d, y�� �� : %d\n", x, y);

	temp = x;
	x = y;
	y = temp;

	printf("Swap �� -> x�� �� : % d, y�� �� : % d\n", x, y);
}

// ������ ���� ���� (�Լ�)
void SwapReference(int * x, int * y)
{
	int temp = 0;

	temp = *x;
	*x = *y;
	*y = temp;
}

void main()	
{    
#pragma region �Լ��� ȣ��(�Ű����� (X))
	// Attack();
	// Attack();

	// printf("Function()�� �� : %d\n", Function());
	// printf("ProcessInt()�� �� : %d\n", ProcessInt());
#pragma endregion

#pragma region �Լ��� ȣ��(�Ű����� (O))

	// �μ���?
	// �Լ��� ȣ��� �� �Ű������� ������ ���ĵǴ� ���Դϴ�.
	// Calculator(100);

	// �μ��� ���ʿ������� �Ű������� ���޵˴ϴ�.
	// printf("Add() �Լ��� �� : %d", Add(10, 20));
#pragma endregion

#pragma region ���� ���� ���� & ������ ���� ����

	int a = 100;
	int b = 200;

	// call by value
	Swap(a, b);
	printf("a ������ �� : %d, b ������ �� : %d\n", a, b);

	// call by reference
	// �Լ��� ȣ���� �� ������ �ּҸ� �μ��� �����ϰ� �Ǹ� 
	// ������ ������ �ּҰ� �����Ǿ� �μ��� ������ ���� �Լ� ������ �Ͼ
	// ���꿡 ���� ������ �޽��ϴ�.
	SwapReference(&a, &b);
	printf("a ������ �� : %d, b ������ �� : %d\n", a, b);

#pragma endregion
}
