//#include <stdio.h>
//
//struct vision
//{
//	double left;
//	double right;
//};
//
//struct vision exchange(struct vision robot); 
//
//int main(void)
//{
//	struct vision robot;
//
//	printf("�÷� �Է� : ");
//	scanf("%lf%lf", &(robot.left), &(robot.right)); // ���� ������ �켱������ �� ����.
//	robot = exchange(robot); // ��ȯ �Լ� ȣ��
//	printf("�ٲ� �÷� : %.1lf %.1lf\n", robot.left, robot.right);
//
//	return 0;
//}
//
//struct vision exchange(struct vision robot) // ����ü ��ȯ �Լ�
//{
//	double temp;
//
//	temp = robot.left;
//	robot.left = robot.right;
//	robot.right = temp;
//
//	return robot; // ����ü ���� ��ȯ
//}