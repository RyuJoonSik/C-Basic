//#include <stdio.h>
//
//int main(void)
//{
//	int ary[3] = { 10, 20, 30 };
//	int* pa = ary;
//	int i;
//
//	printf("배열의 값 : ");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *pa); // pa가 가리키는 배열 요소 출력
//		pa++;	// 다음 배열 요소를 가리키도록 pa값 증가
//	}
//
//	return 0;
//}
///* 배열명과 포인터의 차이 
//	1. sizeof 연산의 결과가 다르다. 포인터 : 4바이트. 배열명 : 배열 전체 크기
//	2. 변수와 상수의 차이. 포인터 : 값을 바꿀 수 있다. 배열명 : 값을 바꿀 수 없다.
//	
//	주의점
//	1. 포인터의 값(변수)이 변할 경우 유효한 값인지 확인
//	2. 포인터에 증가 연산자와 간접 참조 연산자를 함께 사용할 때 전위 표현을 사용하면 안된다.*/