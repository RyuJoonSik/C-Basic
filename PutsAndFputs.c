#include <stdio.h>

int main(void)
{
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str); // apple juice ��� �� �� �ٲ�
	fputs(ps, stdout);; // banana�� ���. �� �ٲ�(X)
	puts("milk");

	return 0;
}

// �μ��� �迭��, ������, ���ڿ� ����� �� �� �ִ�.