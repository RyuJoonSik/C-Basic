//#include <stdio.h>
//
//int get_num(void); // �Ű����� X
//void print_char(char ch, int count); // ��ȯ�� X
//void print_line(void); // �Ű�����, ��ȯ�� X
//
//int main(void)
//{
//	int result;
//
//	result = get_num(); // void�� ���ǳ� ���𿡼� ���
//	printf("��ȯ�� : %d\n", result);
//
//	print_char('@', 5);
//
//	print_line();
//	printf("�й�\t�̸�\t����\t����\n");
//	print_line();
//
//	return 0;
//}
//
//int get_num(void) // �Ű����� X
//{
//	int num;
//
//	printf("��� �Է� : ");
//	scanf("%d", &num);
//
//	return num;
//}
//
//void print_char(char ch, int count) // ��ȯ�� X
//{
//	int i;
//	for (i = 0; i < count; i++)
//	{
//		printf("%c", ch);
//	}
//	printf("\n");
//
//	return; // ���� ����. �Լ� ���� �߰��� ���ư��� �� ��� ��𼭵� ��� ����.
//}
//
//void print_line(void)
//{
//	int i;
//
//	for (i = 0; i < 50; i++)
//	{
//		printf("-");
//	}
//	printf("\n");
//}