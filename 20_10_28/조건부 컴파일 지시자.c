//#include <stdio.h>
//#define VER 6
//#define BIT16
//
//int main(void)
//{
//	int max;
//
//#if VER  >= 6 // ���� ����� ������ ġȯ�Ǵ� ��ũ�� ����� ���� ���� ���
//	printf("���� %d�Դϴ�.\n", VER);
//#endif
//
//#ifdef BIT16  // Ư�� ��ũ�θ��� ���ǵǾ� �ִ��� �˻�
//	max = 32767;
//#else
//	max = 2147483647;
//#endif
//
//#if(defined(BIT16) && (VER >= 6))
//	max = 2147483647;
//#endif
//
//#if VER >= 6
//	printf("���� %d�Դϴ�.\n", VER);
//#else
//#error ������ ������ 6.0 �̻��̾�� �մϴ�.
//#endif
//
//	printf("int�� ������ �ִ� : %d\n", max);
//
//	return 0;
//}