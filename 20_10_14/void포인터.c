#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.5;
	void* vp; // void ������

	vp = &a; // int�� ������ �ּ� ����
	printf("a : %d\n", *(int*)vp); // �� ��ȯ

	vp = &b; // double�� ������ �ּ� ����
	printf("b : %.1lf\n", *(double*)vp); // �� ��ȯ

	return 0;
}