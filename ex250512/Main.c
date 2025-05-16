#include <stdio.h>

void PrintStringToAscii(char* s) {
	for (int i = 0; s[i] != '\0'; i++) {
		printf("%c : %d\n", s[i], s[i]);
	}
	printf("\n");
}

int main() {
	char* s1 = "ABCDEF";
	PrintStringToAscii(s1);
	return 0;
}


//#include <stdio.h>
//
//int main() {
//	char* s1 = "ABCDEF";
//	for (int i = 0; s1[i] != '\0'; i++) {
//		printf("%c : %d\n", s1[i], s1[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	char* s1 = "ABC";
//	char* s2 = "Hello";
//	printf("%s %s\n", s1, s2);
//	printf("%c %d\n", s1[0], s2[0]);
//	printf("%c %d\n", s1[1], s2[1]);
//	printf("%c %d\n", s1[2], s2[2]);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	char* s1 = "ABC";
//	char* s2 = "Hello";
//	printf("%s %s\n", s1, s2);
//	printf("%s %s\n", s1+1, s2+1);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	char* s = "ABC";
//	printf("%c %c\n", s[0], "ABC"[0]);
//	printf("%s %s\n", s, "ABC");
//	printf("%s %s\n", s+1, "ABC"+1);
//	printf("%p %p\n", s, "ABC");
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	char* s = "ABC";
//	printf("%s %s\n", s, "ABC");
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	char* s = "ABC";
//
//	printf("%p %p\n", s, s+1);
//	printf("%s %s\n", s, s+1);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	char* s;
//	s = "ABC";
//	char arr[4] = "ABC";
//
//	printf("%p %p\n", s, &arr[0]);
//	printf("%s %s\n", s, &arr[0]);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n1 = 65;
//	int n2 = 'A';
//
//	printf("%d %d\n", n1, n2);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n1 = 65;
//	int n2 = 'A';
//
//	printf("%d %d\n", n1, n2);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n = 65;
//
//	printf("%c %d\n", n, n);
//	printf("%c %d\n", 65, 65);
//	printf("%c %d\n", 'A', 'A');
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	double pa[4] = { 1.1, 2.2, 3.3, 4.4};
//	double* pd = &(pa[1]);
//
//	printf("%g %g", pa[1], pd[0]);
//	printf("%g %g", pa[2], pd[1]);
//	printf("%g %g", pa[0], pd[-1]);
//
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int arr[2] = { 100, 200 };
//	int* p = arr;
//	printf("%d %d\n", arr[0], arr[1]);
//	printf("%d %d\n", p[0], p[1]);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int arr[2] = { 100, 200 };
//	int* p = arr;
//	printf("%p %d\n", p, *(p + 0));
//	printf("%p %d\n", p + 1, *(p + 1));
//	printf("%p %d\n", p, p[0]);
//	printf("%p %d\n", p + 1, p[1]);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int arr[2] = { 100, 200 };
//	int* p = arr;
//	printf("%p %d\n", p, *(p+0));
//	printf("%p %d\n", p + 1, *(p + 1));
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n = 10;
//	int* p = &n;
//	printf("%d %d\n", *&n, *p);
//	printf("%d %d\n", *(&n + 1), *(p + 1));
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n = 10;
//	int* p = &n;
//	printf("%p %p\n", &n, p);
//	printf("%p %p\n", &n+1, p+1);
//	printf("%p %p\n", &n+2, p+2);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n = 10;
//	int* p = &n;
//	printf("%p %p\n", &n, p);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	char arr[3] = {10,20,30};
//	double darr[3] = { 10.1,20.2,30.3 };
//	char* pc = &arr[0];
//	double* pd = &darr[0];
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n = 10;
//	int n2 = n;
//	int* p = &n;
//	int* p2 = p;
//	return 0;
//}
