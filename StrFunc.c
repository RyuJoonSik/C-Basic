//#include <stdio.h>
//
//char* my_strcpy(char* pd, char* ps);
//
//int main(void)
//{
//	char str[80] = "strawberry";
//
//	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
//	my_strcpy(str, "apple");
//	printf("�ٲ� �� ���ڿ� : %s\n", str);
//	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));
//
//	return 0;
//}
//
//char* my_strcpy(char* pd, char* ps)
//{
//	char* po = pd; // �Լ� ȣ�� ������ ��¹��� ����Ͽ� ���� ���� ���ڿ��� �ٷ� Ȯ�� �� �� �ִ�.
//
//	while (*ps != '\0')
//	{
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//
//	*pd = '\0';
//
//	return po;
//}
//
//char* my_strcat(char* pd, char* ps)
//{
//	char* po = pd; // �迭�� ó�� ��ġ
//
//	while (*pd != '\0')
//	{
//		pd++;
//	}
//	while (*ps != '\0')
//	{
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//
//	*pd = '\0';
//	return po;
//}
//
//int my_strlen(char* ps)
//{
//	int cnt = 0;
//	while (*ps != '\0')
//	{
//		cnt++;
//		ps++;
//	}
//	return cnt;
//}
//
//int my_strcmp(char* pa, char* pb)
//{
//	while ((*pa == *pb) && (*pa != '\0'))
//	{
//		pa++;
//		pb++;
//	}
//
//	if (*pa > * pb) return 1; // �ƽ�Ű �ڵ尪�� ũ�� 1��ȯ
//	else if (*pa < *pb) return -1; // �ƽ�Ű �ڵ� ���� ������ -1��ȯ
//	else return 0; // �� �� ������ 0 
//}