#include <stdio.h>

int main() {

	return 0;
}


//#include <stdio.h>
//
//void printEvenNumber(int start, int end, int isOdd); // 識情
//
//int main() {
//	printEvenNumber(1, 10, 1);
//	printEvenNumber(20, 30, 0);
//
//	return 0;
//}
//
//void printEvenNumber(int start, int end, int isOdd) {
//	for (int i = start; i <= end; i++) {
//		int mod = i % 2;
//		if (mod == isOdd) {
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//}


//#include <stdio.h>
//
//void printEvenNumber(int start, int end, int isOdd); // 識情
//
//int main() {
//	printEvenNumber(1, 10, 1);
//	printEvenNumber(20, 30, 0);
//
//	return 0;
//}
//
//void printEvenNumber(int start, int end, int isOdd) {
//	for (int i = start; i <= end; i++) {
//		int mod = i % 2;
//		if (mod == isOdd) {
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//}


//#include <stdio.h>
//
//void printEvenNumber(int start, int end, int isOdd) {
//	for (int i = start; i <= end; i++) {
//		int mod = i % 2;
//		if (mod == isOdd) {
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//}
//
//int main() {
//
//	printEvenNumber(1, 10, 1);
//	printEvenNumber(20, 30, 0);
//
//	return 0;
//}


//#include <stdio.h>
//
//void printEvenNumber(int start, int end, int flag) {
//	for (int i = start; i <= end; i++) {
//		if (i % 2 == flag) {
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//}
//
//int main() {
//
//	printEvenNumber(1, 10, 1);
//	printEvenNumber(20, 30, 0);
//
//	return 0;
//}


//#include <stdio.h>
//
//void printEvenNumber(int start, int end) {
//	for (int i = start; i <= end; i++) {
//		if (i % 2 == 0) {
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//}
//
//int main() {
//	
//	printEvenNumber(1,10);
//	printEvenNumber(20,30);
//
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}


//#include <stdio.h>
//
//int TotalInt(int start, int end) {
//	int sum = 0;
//	for (int i = start; i <= end; i++) {
//		sum += i;
//	}
//	return sum;
//}
//
//int main() {
//	printf("sum = %d\n", TotalInt(1, 5));
//
//	return 0;
//}


//#include <stdio.h>
//
//int TotalInt(int start, int end) {
//	int sum = 0;
//	for (int i = start; i <= end; i++) {
//		sum += i;
//	}
//	return sum;
//}
//
//int main() {
//	int sum;
//
//	sum = TotalInt(1, 100);
//	printf("sum = %d\n", sum);
//	sum = TotalInt(6, 7);
//	printf("sum = %d\n", sum);
//	sum = TotalInt(200, 300);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//
//void printTotalInt(int start, int end) {
//	int sum = 0;
//	for (int i = start; i <= end; i++) {
//		sum += i;
//	}
//	printf("sum = %d\n", sum);
//}
//
//int main() {
//	printTotalInt(1, 100);
//	printTotalInt(6, 7);
//	printTotalInt(200, 300);
//
//	return 0;
//}


//#include <stdio.h>
//
//void printTotalInt() {
//	int sum = 0;
//	for (int i = 1; i <= 10; i++) {
//		sum += i;
//	}
//	printf("sum = %d\n", sum);
//}
//
//int main() {
//	printTotalInt();
//
//	return 0;
//}


//#include <stdio.h>
//
//
//int main() {
//	int sum = 0;
//	for (int i = 1; i <= 10; i++) {
//		sum = sum + i;
//	}
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//
//int Add(int a, int b) {
//	int sum = a + b;
//	return sum;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int r;
//
//	r = Add(a, b);
//
//	printf("sum = %d\n", r);
//	printf("sum = %d\n", Add(1,3));
//	printf("sum = %d\n", Add(12,12));
//
//	return 0;
//}


//#include <stdio.h>
//
//int Add(int a, int b) {
//	int sum = a + b;
//	return sum;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int r;
//
//	r = Add(a, b);
//
//	printf("sum = %d\n", r);
//
//	return 0;
//}


//#include <stdio.h>
//
//void printAdd(int a, int b) {
//	printf("%d + %d = %d\n", a, b, a+b);
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//
//	printAdd(a, b);
//	printAdd(7, 5);
//
//
//	return 0;
//}


//#include <stdio.h>
//
//void printHello(int size) {
//	for (int i = 0; i < size; i++) {
//		printf("Hello : %d\n", i + 1);
//	}
//	puts("");
//}
//
//int main() {
//	printHello(2);
//	printHello(3);
//	printHello(10);
//
//	return 0;
//}


//#include <stdio.h>
//
//void printHello(int size) {
//	for (int i = 0; i < size; i++) {
//		printf("Hello : %d\n", i + 1);
//	}
//	puts("");
//}
//
//int main() {
//	printHello(2);
//	printHello(3);
//	printHello(10);
//
//	return 0;
//}


//#include <stdio.h>
//
//void printHello() {
//	for (int i = 0; i < 5; i++) {
//		printf("Hello : %d\n", i+1);
//	}
//	puts("");
//}
//
//int main() {
//	printHello();
//	printHello();
//	printHello();
//
//	return 0;
//}


//#include <stdio.h>
//
//void printHello() {
//	printf("Hello\n");
//	printf("Hello\n");
//}
//
//int main() {
//	printHello();
//	printHello();
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	puts("Hello, World!");
//	printf("integer : %d\n", 100);
//	printf("string : %s\n", "Hello!");
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	printf("Hello, World!\n");
//	printf("integer : %d\n", 100);
//	printf("string : %s\n", "Hello!");
//
//	return 0;
//}
