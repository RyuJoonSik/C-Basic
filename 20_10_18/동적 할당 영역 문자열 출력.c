#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps); // ���� �Ҵ� ������ ���ڿ��� ����ϴ� �Լ�

int main(void)
{
	char temp[80];
	char* str[21] = { 0 };
	int i = 0;

	while (i < 20)
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);
		if (strcmp(temp, "end") == 0) break;
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
	}

	print_str(str);

	for (i = 0; str[i] != NULL; i++) // str�� ����� ���ڿ��� ���� ������
	{
		free(str[i]);
	}
	
	return 0;
}

void print_str(char** ps)
{
	while (*ps != NULL) // ������ �迭�� ���� �� �����Ͱ� �ƴ� ����
	{
		printf("%s\n", *ps); // ps�� ����Ű�� ���� ������ �迭�� ���
		ps++;
	}
}