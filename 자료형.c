#include <stdio.h>

int main(void)
{
	char ch1 = 'A'; // �ƽ�Ű ��
	char ch2 = 65; // 'A'�� �ش��ϴ� ���� ��

	printf("���� %c�� �ƽ�Ű �ڵ� �� : %d\n", ch1, ch1);
	printf("�ƽ�Ű �ڵ� ���� %d�� ���� : %c\n", ch2, ch2);

	short sh = 3267; // short �ִ�
	int in = 2147483647; // int �ִ�
	long ln = 2147483647; // long �ִ�
	long long lln = 123451234512345; // ū ��

	printf("short ���� : %d\n", sh);
	printf("int ���� : %d\n", in);
	printf("long ���� : %ld\n", ln);
	printf("long long ���� : %lld\n", lln);
	
	return 0;
}