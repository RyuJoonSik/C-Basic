//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str1[80] = "strawberry";
//	char str2[80] = "apple";
//	char* ps1 = "banana";
//	char* ps2 = str2;
//
//	printf("���� ���ڿ� : %s\n", str1);
//	strcpy(str1, str2); 
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, ps1);
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, ps2);
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, "banana"); // �μ� 1 :���� ���� ���� �迭��. 2 : ������ ���ڿ�(���� ��ġ�� �� �� �ִ�)
//							// ù��° �μ��� ��� ���ڿ��� X
//							
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	char str3[20] = "mango tree";
//	strncpy(str3, "apple-pie", 5); // 5�� ���ڸ� ����
//
//	printf("%s\n", str3); // apple tree
//	
//	char str4[80] = "straw";
//
//	strcat(str4, "berry"); // ���ڿ� ���̱�(�� ���� ã���� �� ��ġ���� �ٿ��ְ� �������� �� ���� ����)
//	printf("%s\n", str4);
//	strncat(str4, "piece", 3); // 3���� ���̱�
//	printf("%s\n", str4);
//
//	return 0;
//}
//
///* strcat ������ 1 : �޸� ħ�� �� �� ����
//				2 : �迭�� �ʱ�ȭ(�����Ⱚ ����) 
//					char str[80] = {'\0'};
//					char str[80] = {0};
//					char str[80] = "";
//					str[0] = '\0';				*/