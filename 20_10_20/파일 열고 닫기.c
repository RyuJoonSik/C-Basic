//#include <stdio.h>
//
//int main(void)
//{
//	FILE* fp; // 파일 포인터
//
//	fp = fopen("a.txt", "r"); // a.txt 파일을 읽기 전용으로 개방
//	// 기본 위치는 현재 작업 디렉터리.
//
//	if (fp == NULL) // fp가 널 포인터면 파일 개방 실패(반드시 검사)
//	{
//		printf("파일이 열리지 않습니다.\n");
//		return 1; // 프로그램 종료
//	}
//	printf("파일이 열렸습니다.\n");
//	fclose(fp); // 파일 닫기
//
//	return 0;
//}
//
///*	r : 읽기, 없으면 NULL 포인터 반환
//*	w : 파일 내용 지우고 쓰기, 없으면 새로운 파일 생성
//*	a : 파일 끝에 추가, 없으면 파일 생성
//*	fopen 함수는 실제 파일이 있는 장치와 연결되는 스트림 파일을 메모리에 만든다.
//*	그리고 스트림 파일에 접근할 수 있도록 파일 포인터를 반환한다.
//*/