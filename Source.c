#include <stdio.h> 
#include "SoundManager.h"

#pragma region ��� �Լ�
   // � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ�
   // �۾��� �����ϴ� �Լ��Դϴ�.
void Recursion(int x)
{
	if (x == 1)
	{
		// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������
		// ���� ������ �޸𸮰� ��� ���̰� �ǹǷ�
		// ���� �����÷ο찡 �߻��մϴ�.
		return;
	}

	printf("Recursion() �Լ� ȣ��\n");
	
	Recursion(x - 1);
}
#pragma endregion

#pragma region ���丮��

int Factorial(int x)
{
	// Ư���� ������ �Ǿ��� �� return ��
	if (x == 1)
	{
		return 1;
	}
	// Ư���� ������ �ƴ϶�� ��� �Լ� ����
	else	 
	{
		return x * Factorial(x - 1);
	}
}
#pragma endregion

#pragma region �ζ��� �Լ�
  // �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
  // �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.
inline void Function()
{
	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ�
	// ó�� �ӵ��� ��������, �ζ��� �Լ��� ���� ����ϰ� 
	// �Ǹ� �Լ��� �ڵ尡 ����Ǳ� ������ ���� ������ 
	// Ŀ���� �˴ϴ�.
	printf("Function() ȣ��\n");	
}

#pragma endregion

void main()	
{    
	// ��� �Լ�
	// Recursion(3);

	// ���丮��
    // printf("Factorial�� �� : %d", Factorial(6));

	// �ζ��� �Լ�
	// Function();

#pragma region �ݺ��� (do~while)
// ���ǰ� ������� �� ���� �۾��� ������ ����
// ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	// int count = 3;
	// 
	// do
	// {
	// 	printf("�α��� �õ�\n");
	// 	count--;
	// } 
	// while (count > 0);
#pragma endregion

	Sound();


}
