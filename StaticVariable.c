//#include <stdio.h>
//
//void auto_func(void);
//void static_func(void);
//
//int main(void)
//{
//	int i;
//
//	printf("�Ϲ� ���� ����(auto)�� ����� �Լ�...\n");
//	for (i = 0; i < 3; i++)
//	{
//		auto_func(); // �Լ� ȣ��� ��ȯ �� �޸𸮿��� ����.
//	}
//
//	printf("���� ���� ����(static)�� ����� �Լ�...\n");
//	for (i = 0; i < 3; i++)
//	{
//		static_func(); // ���� ���� ������ ������� ���α׷��� ���� ������ ����.
//					   // 0���� �ڵ� �ʱ�ȭ.
//	}
//
//	return 0;
//}
//
//void auto_func(void)
//{
//	auto int a = 0;
//
//	a++;
//	printf("%d\n", a);
//} 
//
//void static_func(void)
//{
//	static int a; // ���� ���� ���� ����. �ڵ� ���� �ȿ� ����.
//
//	a++;
//	printf("%d\n", a);
//}