#include <stdio.h>

int main() {
	int arr[4] = { 10, 20, 30, 40 };
	int* p;
	p = arr;

	printf("%d %d %d %d\n", *(p), *(p + 1), *(p + 2), *(p + 3));
	printf("%d %d %d %d\n", p[0], p[1], p[2], p[3]);

	for (int i = 0; i < 4; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n");
	return 0;
}


//#include <stdio.h>
//
//int main() {
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p;
//	p = arr;
//
//	printf("%d %d %d %d\n", *(p), *(p + 1), *(p + 2), *(p + 3));
//	printf("%d %d %d %d\n", p[0], p[1], p[2], p[3]);
//
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p;
//	p = &arr[0];
//
//	printf("%d\n", *p);
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//	printf("%p %p %p %p\n", &arr[0], &arr[1], &arr[2], &arr[3]);
//	printf("%p %p %p %p\n", p + 0, p + 1, p + 2, p + 3);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p;
//	p = &arr[0];
//
//	printf("%d\n", *p);
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//	printf("%p %p %p %p\n", &arr[0], &arr[1], &arr[2], &arr[3]);
//	printf("%p %p %p %p\n", p+0, p+1, p+2, p+3);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p;
//	p = &arr[3];
//
//	printf("%d\n", *p);
//	printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p;
//	p = arr + 1;
//	p = &arr[1];
//
//	printf("%d\n", *p);
//	printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
//	return 0;
//}



//#include <stdio.h>
//
//int main() {
//	// 배열
//	int arr[4];
//	for (int i = 0; i < 4; i++) {
//		arr[i] = (i+1)*10;
//	}
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//

//#include <stdio.h>
//
//int main() {
//	// 배열
//	int arr[4];
//	for (int i = 0, j = 10; i < 4; i++, j=j+10) {
//		arr[i] = j;
//	}
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	// 배열
//	int arr[4];
//	for (int i = 0; i < 4; i++) {
//		arr[i] = 10;
//	}
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	// 배열
//	int arr[4];
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = 30;
//	arr[3] = 40;
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	// 배열
//	int arr[4] = { 10, 20, 30, 40 };
//	
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	// 배열
//	int arr[4] = { 10, 20, 30, 40 };
//	printf("size arr[2] : %d\n", sizeof(arr[2]));
//	printf("size array : %d\n", sizeof(arr));
//	printf("%d ", arr[0]);
//	printf("%d ", arr[1]);
//	printf("%d ", arr[2]);
//	printf("%d ", arr[3]);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	// 배열
//	int arr[4] = { 10, 20, 30, 40 };
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//	return 0;
//}


//#include <stdio.h>
//
//
//int main() {
//	// 배열
//	int a = 10;
//	int b = 20;
//	int arr[2] = { 10, 20 };
//	printf("%d %d \n", a, b);
//	printf("%d %d \n", arr[0], arr[1]);
//	return 0;
//}


//#include <stdio.h>
//
//
//int main() {
//	// 주소의 연산 : 정수 + 정수 가감산
//	int n = 10;
//	int* p = &n;
//
//	printf("%d %d \n", n, *p);
//	
//	return 0;
//}


//#include <stdio.h>
//
//
//int main() {
//	// 주소의 연산 : 정수 + 정수 가감산
//	double n = 10;
//	double* p = &n;
//
//	printf("%p %p \n", &n, p);
//	printf("%p %p \n", &n+1, p+1);
//	printf("%p %p \n", &n+2, p+2);
//	printf("%p %p \n", &n-1, p-1);
//	return 0;
//}


//#include <stdio.h>
//
//
//int main() {
//	// 주소의 연산 : 정수 + 정수 가감산
//	int n = 10;
//	printf("%p %d \n",&n, n);
//	printf("%p %d \n", &n+1, n+1);
//	printf("%p %d \n", &n+2, n+2);
//	printf("%p %d \n", &n+3, n+3);
//	return 0;
//}


//#include <stdio.h>
//
//
//int main() {
//	int n = 10;
//	int* p= &n;
//
//	char c = 10;
//	char* p2 = &c;
//
//	double d = 10.0;
//	double* p3 = &d;
//	return 0;
//}


//#include <stdio.h>
//
//void IncrementData(int* p) {
//	*p += 1;
//}
//
//void PrintData(int* p) {
//	printf("data = %d \n", *p);
//}
//
//void ResetData(int* p) {
//	*p = 0;
//}
//
//void SetData(int* p, int data) {
//	*p = data;
//}
//
//int main() {
//	int n;
//	ResetData(&n);
//	PrintData(&n);
//	IncrementData(&n);
//	PrintData(&n);
//	SetData(&n, 100);
//	PrintData(&n);
//	IncrementData(&n);
//	PrintData(&n);
//	return 0;
//}


//#include <stdio.h>
//
//void IncrementData(int* n) {
//	*n += 1;
//}
//
//void PrintData(int* p) {
//	printf("data = %d ", *p);
//}
//
//void ResetData(int* n) {
//	*n = 0;
//}
//
//int main() {
//	int n;
//	ResetData(&n);
//	PrintData(&n);
//	IncrementData(&n);
//	PrintData(&n);
//	return 0;
//}


//#include <stdio.h>
//
//void UpdateData(int* n, int data) {
//	*n = data;
//}
//
//int main() {
//	int n = 10;
//	int* k = &n;
//
//	printf("data = %d \n", n);
//	UpdateData(&n, 200);
//	UpdateData(&n, 60);
//	printf("data = %d \n", n);
//	return 0;
//}


//#include <stdio.h>
//
//void UpdateData(int* n, int data) {
//	*n = data;
//}
//
//int main() {
//	int n = 10;
//	printf("data = %d \n", n);
//	UpdateData(&n, 200);
//	printf("data = %d \n", n);
//	return 0;
//}


//#include <stdio.h>
//
//void PrintData(int* p) {
//	printf("data = %d ", *p);
//	*p = 200;
//}
//
//int main() {
//	int n = 10;
//	int* p2 = &n;
//
//	PrintData(&n);
//	PrintData(p2);
//	return 0;
//}


//#include <stdio.h>
//
//void PrintData(int* p) {
//	printf("data = %d ", *p);
//}
//
//int main() {
//	int n = 10;
//	int* p2 = &n;
//	
//	PrintData(&n);
//	PrintData(p2);
//	return 0;
//}


//#include <stdio.h>
//
//void PrintData(int* p) {
//	printf("data = %d ", *p);
//}
//
//int main() {
//	int n;
//	n = 10;
//	PrintData(&n);
//	return 0;
//}


//#include <stdio.h>
//
//void PrintData(int n) {
//	printf("data = %d ", n);
//}
//
//int main() {
//	int n;
//	n = 10;
//	PrintData(n);
//	return 0;
//}
