//#include <stdio.h>
//
//enum season { SPRING, SUMMER, FALL, WINTER }; // ������ ����
//// SPFING == 0, SUMMER == 1, FALL == 2, WINTER == 3
//// enum season { SPRING = 5, SUMMER, FALL = 10, WINTER };
//int main(void)
//{
//	enum season ss; // ������ ���� ����(int���� ���� ũ��)
//	char* pc = NULL; // ���ڿ� ������
//
//	ss = SPRING; // ���� ����� ����
//	switch (ss)
//	{
//	case SPRING:
//		pc = "inline"; break;
//	case SUMMER:
//		pc = "swimming"; break;
//	case FALL:
//		pc = "trip"; break;
//	case WINTER:
//		pc = "skiing"; break;
//	}
//	printf("���� ���� Ȱ�� => %s\n", pc);
//
//	return 0;
//}