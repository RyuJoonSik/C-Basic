//#include <stdio.h>
//
//int main(void)
//{
//	void my_gets(char* ps);
//
//	int i = 0;
//	char str[20];
//	char ch;
//
//	my_gets(str);
//
//	//printf("%s", str);
//	//do
//	//{
//	//	ch = getchar(); // ���� �� �� �Է�
//	//	str[i] = ch;
//	//	i++;
//	//} while (ch != '\n'); // �Է°��� ���� ���ڸ� ����
//
//	//str[i-1] = '\0'; // ���� ���ڰ� �Էµ� ��ġ�� �� ���� ����
//	//printf("%s", str);
//
//	return 0;
//}
//
//// �Լ��� ����
//void my_gets(char* ps)
//{
//	char ch;
//
//	while ((ch = getchar()) != '\n') // �Է¹޴� ���ڰ� ������ �ƴѵ���
//	{
//		*ps = ch;
//		ps++;
//	}
//	*ps = '\0';
//
//	ps = ch;
//	printf("%s", ps);
//}