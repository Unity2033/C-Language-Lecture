#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	char a[10] = { "ABCD" };
	char b[10] = { "EFGH" };

	// �� ���� ���ڿ��� ���� ������ 0�� ��ȯ�մϴ�.
	// ù ��° �Ű����� ���ڿ��� ���� ũ�ٸ� 1�� ��ȯ�մϴ�.
	// �� ��° �Ű����� ���ڿ��� ���� ũ�ٸ� -1�� ��ȯ�մϴ�. 
	int value = strcmp(a, b);

	printf("value�� �� : %d", value);




	return 0;
}
