<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
	int a;
	double b;
	char c;

	printf("int�� ������ �ּ� : %u\n", &a); // �ּ� ������ &
	printf("double�� ������ �ּ� : %u\n", &b);
	printf("char�� ������ �ּ� : %u\n", &c);

	printf("int�� ������ �ּ� : %p\n", &a);
	printf("double�� ������ �ּ� : %p\n", &b);
	printf("char�� ������ �ּ� : %p\n", &c);

	return 0;
}
=======
//#include <stdio.h>
//
//int main(void)
//{
//	int a;
//	int* pa;
//
//	pa = &a;
//	*pa = 10; // ���� ���� ������(*) Ȥ�� ������ ������
//
//	printf("�����ͷ� a �� ��� : %d\n", *pa);
//	printf("���������� a �� ��� : %d\n", a);
//
//	return 0;
//
//	// scanf("%d", &a) �� scanf("%d", pa)�� ����.
//}
>>>>>>> 2e79bee610a3942467f520b3086a32d0d5c16094
