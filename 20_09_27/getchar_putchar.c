#include <stdio.h>

int main(void)
{
	int ch;

	ch = getchar(); // ��ȯ ���� �ٷ� ����(�ƽ�Ű �ڵ� ������ ��ȯ�ϱ� ������ int)
	printf("�Է��� ���� : ");
	putchar(ch); // ��� �������� ������ �߻��ϸ� -1 ��ȯ
	putchar('\n');
	// ���� ���� ����� �Լ� getchar, putchar
	// �ƽ�Ű �ڵ尪�� �ش��ϴ� ���ڸ� ��/���.

	return 0;
}