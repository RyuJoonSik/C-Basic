//#include <stdio.h>
//
//int main(void)
//{
//	FILE* fp;
//	int age;
//	char name[20];
//
//	fp = fopen("a.txt", "r");
//	fscanf(fp, "%d", &age);
//	fgets(name, sizeof(name), fp); 
//
//	printf("���� : %d, �̸� : %s", age, name);
//	fclose(fp);
//
//	return 0;
//}
//
///* int fflush(FILE *) : ���۸� ����. ��� ���Ͽ� ����ϸ� ���۸�
//						���鼭 ���� �����͸� ����� ��ġ�� �ٷ� ����Ѵ�.*/