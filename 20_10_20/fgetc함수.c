//#include <stdio.h>
//
//int main(void)
//{
//	FILE* fp;
//	int ch;
//
//	fp = fopen("a.txt", "r");
//	if (fp == NULL)
//	{
//		printf("������ ������ �ʾҽ��ϴ�.\n");
//		return 1;
//	}
//
//	while (1)
//	{
//		ch = fgetc(fp); // ������ ���Ͽ��� �� ���� �Է�. ��ġ ������ �ڵ� ����
//		if (ch == EOF) // �Լ��� ��ȯ���� EOF(=-1) �̸� �Է� ����
//		{
//			break;
//		}
//		putchar(ch); // ȭ�鿡 ���
//	}
//	fclose(fp);
//
//	return 0;
//}