//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10; // ������ ����
//	int b = 12;
//
//	printf("a & b : %d\n", a & b); // ��� 1�϶�
//	printf("a ^ b : %d\n", a ^ b); // ���� �ٸ���
//	printf("a | b : %d\n", a | b); // �ϳ��� 1�϶�
//	printf("~a : %d\n", ~a); // ��Ʈ ����
//	printf("a << b : %d\n", a << 1); // �������� ��Ʈ �̵�(0���� ä����)
//	printf("a >> b : %d\n", a >> 2); 
//
//	a = 10, b = 5;
//	int res;
//
//	res = a / b * 2;
//	printf("res = %d\n", res);
//	res = ++a * 3;
//	printf("res = %d\n", res);
//	res = a > b && a != 5;
//	printf("res = %d\n", res);
//	res = a % 3 == 0;
//	printf("res = %d\n", res);
//
//	return 0;
//}

// ���������� �̵�(������ ��� ���� ��Ʈ ��� 1�� ä��) unsigned�� ��� 0
// ~���� ���մ��� ������ ����
// ���� > ���� > ���� ��. ��� ���� > ��Ʈ �̵�> ���� > �� ���� ��
// �켱���� ���� ��� ���� ��->��. ����, ������ ��->��