//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	FILE* fp;
//	char str[20];
//
//	fp = fopen("a.txt", "a+");
//	if (fp == NULL)
//	{
//		printf("������ ������ ���߽��ϴ�.\n");
//		return 1;
//	}
//
//	while (1)
//	{
//		printf("���� �̸� : ");
//		scanf("%s", str);
//		if (strcmp(str, "end") == 0)
//		{
//			break;
//		}
//		else if (strcmp(str, "list") == 0)
//		{
//			fseek(fp, 0, SEEK_SET); 
//			// rewind(fp); �� ��ü ����
//			// ������ ��ġ �����ڸ� �� ó������ �̵�
//			// ����� ��ȯ �� 
//			while (1)
//			{
//				fgets(str, sizeof(str), fp);
//				if (feof(fp)) // ��Ʈ�� ������ �����͸� ��� �о����� Ȯ��
//				{
//					break;
//				}
//				printf("%s", str); 
//			}
//		}
//		else
//		{
//			fprintf(fp, "%s\n", str); // �Է��� ���� �̸��� ���Ͽ� ���
//		}
//	}
//	fclose(fp);
//
//	return 0;
//}