#include <stdio.h>
#include <stdlib.h>	// rand(), srand()
#include <time.h>

int main()	
{    
#pragma region rand() �Լ�
    // 0 ~ 32767 ������ ���� ���� �����ϴ�
	// �Լ��Դϴ�.
	 
	// time : 1970�� 1�� 1�� 0�� (UTC)���� �������
	// �帥 �ð��� ��ȯ�մϴ�.

	// �ð� ���� : (��)
	// srand(time(NULL));
	// 
	// // 5�� ������ּ���.
	// 
	// int value = 0;
	// 
	// // ������ ���� �� �ڸ����� ���� �� �ֵ��� ����� �ּ���.
	// for (int i = 0; i < 5; i++)
	// {
	// 	value = rand() % 10 + 1;
	// 	printf("value�� �� : %d\n", value);
	// }
	// 
#pragma endregion

#pragma region UP-DOWN ����

	//	int life = 5;
	//	int answer = 0;
	//	int computer = 0;
	//	
	//	srand(time(NULL));
	//	computer = rand() % 50 + 1;
	//	
	//	while(life) // <- ���� ������Ʈ 
	//	{
	//		printf("���� ��� : %d\n", life);
	//		printf("��ǻ�Ͱ� ������ �ִ� ���� : ");
	//	
	//		scanf_s("%d", &answer);
	//	
	//		if (answer == computer)
	//		{
	//			printf("\n���ӿ��� �¸��Ͽ����ϴ�.");
	//			break;
	//		}
	//		else if (answer < computer)
	//		{
	//			printf("\n��ǻ�Ͱ� ������ �ִ� ������ �۽��ϴ�.\n");
	//			life--;
	//		}
	//		else if (answer > computer)
	//		{
	//			printf("\n��ǻ�Ͱ� ������ �ִ� ������ Ů�ϴ�.\n");
	//			life--;
	//		}
	//	}
	//	
	//	
	//	if (life == 0)
	//	{
	//		printf("\n���ӿ��� �й��Ͽ����ϴ�.");
	//	}
	 
#pragma endregion

#pragma region ������ �°�
	// char �ڷ����� short �ڷ����� ������ 
	// �̷���� �� CPU�� ó���ϱ⿡ ���� ������
	// ũ���� ���� �ڷ��� int�� �ڵ� ����ȯ�ϴ� �����Դϴ�.
	  
	char data1 = 5;
	short data2 = 10;

	printf("data1�� data2�� ������ ũ�� : %u", sizeof(data1 + data2));
	  
#pragma endregion



	return 0;
}
