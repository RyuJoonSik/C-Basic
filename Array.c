//#include <stdio.h>
//
//int main(void)
//{
//	int ary[5]; // �ڷ��� + �迭�� + ��Ұ���
//
//	ary[0] = 10; // ù ��° �迭��ҿ� �� ����. �迭��[÷��(index)]
//	ary[1] = 20;
//	ary[2] = ary[0] + ary[1];
//	scanf("%d", &ary[3]);
//
//	printf("%d\n", ary[2]);
//	printf("%d\n", ary[3]);
//	printf("%d\n", ary[4]); // ������ ���� �� �ִ�.
//
//	// �迭�� �ʱ�ȭ
//	int ary1[5] = { 1, 2, 3, 4, 5 }; // ù ��° ��Һ��� ���ʷ� �ʱ�ȭ
//	int ary2[5] = { 1, 2, 3 }; // ���ʺ��� ���ʷ� �ʱ�ȭ, �������� 0���� ä��
//	int ary3[1000] = { 0 }; // ��� ��� 0���� �ʱ�ȭ
//	int ary4[] = { 1, 2, 3 }; // �迭 ��� ���� ���� ����(�ʱ갪 ������ŭ ��� ���� ����)
//	double ary5[5] = { 1.0, 2.1, 3.2, 4.3, 5.4 }; // double�� �迭
//	char ary6[5] = { 'a', 'p', 'p', 'l', 'e' }; // char�� �迭
//
//	// �ݺ��� �翵
//	int score[5]; 
//	int i;
//	int total = 0;
//	double avg;
//	int count;
//
//	count = sizeof(score) / sizeof(score[0]);
//
//	for (i = 0; i < count; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//	for (i = 0; i < count; i++)
//	{
//		total += score[i];
//	}
//	avg = total / (double)count;
//
//	for (i = 0; i < count; i++)
//	{
//		printf("%5d", score[i]);
//	}
//
//	printf("\n");
//
//	printf("��� : %.1lf\n", avg);
//
//	return 0;
//}
//
///* �迭�� �޸𸮿� ���ӵ� ������ �Ҵ�Ǹ� �ϳ��� �̸��� ���.
//	�迭�� �ʱ�ȭ�� ���� �� ���� �� ���� ����. 
//	�迭 ����� ���� = sizeof(�迭��) / sizeof(�迭 ���)
//   */