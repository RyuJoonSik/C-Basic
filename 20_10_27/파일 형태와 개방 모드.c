//#include <stdio.h>
//
//int main(void)
//{
//	FILE* fp;
//	int ary[10] = { 13, 10, 13, 13, 10, 26, 13, 10, 13, 10 };
//	int i, res;
//
//	fp = fopen("a.txt", "wt");
//	for (i = 0; i < 10; i++)
//	{
//		fputc(ary[i], fp);	
//		// �ƽ�Ű ���ڸ� ���̳ʸ� ���Ϸ� �����Ѵ�.
//		// '\r''\n''\r''\r''\n'^z'\r''\n''\r''\n'
//	}
//	fclose(fp);
//
//	fp = fopen("a.txt", "rt");
//	while (1)
//	{
//		res = fgetc(fp);
//		if (res == EOF) break;
//		printf("%4d", res);
//		// '\r''\n''\r''\r''\n' ^ z'\r''\n''\r''\n'
//		// \r\n(����) \r�� ������ \n(13)�� �Է�. 
//		// ^z(Ctrl+z)�� ������ ��(EOF)�� �ν�.
//		// �ؽ�Ʈ ���Ͽ� ����ϴ� �Լ��� ���� ���ڸ� ������ ���� ���ڸ� ���Ͽ� ���.
//	}
//	fclose(fp);
//
//	return 0;
//}