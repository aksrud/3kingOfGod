#include <stdio.h>
#include <stdlib.h>

int main() {
	double* pk = malloc(sizeof(double));
	*pk = 100.1;
	pk[0] = 299.2;
	free(pk);
	return 0;
}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	double d = 5.5;
//	double* pk = NULL;
//	pk = malloc(sizeof(double) * 2);
//	if (pk == NULL) {
//		printf("pk가 NULL일 수 없다.");
//		return -1;
//	}
//	pk[0] = 1.1;
//	pk[1] = 2.2;
//
//	for (int i = 0; i < 2; i++) {
//		printf("double : %g\n", pk[i]);
//	}
//	free(pk);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	double d = 5.5;
//	double* pk = NULL;
//	pk = malloc(sizeof(double) * 2);
//	pk[0] = 1.1;
//	pk[1] = 2.2;
//
//	for(int i = 0; i < 2; i++) {
//		printf("double : %g\n", pk[i]);
//	}
//	free(pk);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int* p = malloc(sizeof(int)*4);
//	p[0] = 10;
//	p[1] = 20;
//	p[2] = 30;
//	p[3] = 40;
//	printf("data : %d\n", p[0]);
//	printf("data : %d\n", p[1]);
//	printf("data : %d\n", p[2]);
//	printf("data : %d\n", p[3]);
//	free(p);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int* p = malloc(sizeof(int));
//	*p = 10;
//	printf("data : %d", *p);
//	free(p);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int* p = malloc(4);
//	*p = 10;
//	printf("data : %d", *p);
//	free(p);
//	return 0;
//}


//#include <stdio.h>
//int g = 10;
//int* pg = &g;
//void Print() {
//	/*printf("local : %d %d\n", n, *pn);
//	printf("global : %d %d\n", g, *pg);*/
//}
//int main() {
//	int n = 10;
//	int* pn = &n;
//
//	printf("local : %d %d\n", n, *pn);
//	printf("global : %d %d\n", g, *pg);
//
//	return 0;
//}


//#include <stdio.h>
//
//void a() {
//	int n1 = 10;
//	printf("n1 : %d\n", n1);
//}
//
//void b() {
//	int n2 = 10;
//	printf("n2 : %d\n", n2);
//}
//
//void c() {
//	int n3 = 10;
//	printf("n3 : %d\n", n3);
//	a();
//	b();
//}
//int main() {
//	a();
//	b();
//	c();
//	return 0;
//}



//#include <stdio.h>
//
//void PrintInteger(int data) {
//	printf("data : %d\n", data);
//}
//
//int main() {
//	// 메모리, 변수, 상수
//	int n = 10;
//	PrintInteger(n);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	// 메모리, 변수, 상수
//	int n = 10;
//	int* pn = &n;
//	printf("%d %d\n", n, *pn);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	char* s1 = "ABC";
//	char s2[] = "ABC";
//
//	printf("%s %s %s\n", s1, s2, "ABC");
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	// char* p = "ABC";
//	// char p[4] = "ABC";
//	// char p[4] = {'A','B','C','\0'};
//	// char p[4] = { 'A','B','C' };
//	// char p[3] = { 'A','B','C'}; 오류 코드
//
//	printf("string : %s\n", p);
//
//	//'A' 'B' 'C'
//	printf("%c\n", p[0]);
//	printf("%c\n", p[1]);
//	printf("%c\n", p[2]);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	// char* p = "ABC";
//	// char p[4] = "ABC";
//	// char p[4] = {'A','B','C','\0'};
//	char p[4] = { 'A','B','C'};
//
//	printf("string : %s\n", p);
//
//	//'A' 'B' 'C'
//	printf("%c\n", p[0]);
//	printf("%c\n", p[1]);
//	printf("%c\n", p[2]);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//  // char* p = "ABC";
//	char p[4] = "ABC";
//	printf("string : %s\n", p);
//
//	//'A' 'B' 'C'
//	printf("%c\n", p[0]);
//	printf("%c\n", p[1]);
//	printf("%c\n", p[2]);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	char* p = "ABC";
//	printf("string : %s\n", p);
//
//	//'A' 'B' 'C'
//	printf("%c\n", p[0]);
//	printf("%c\n", p[1]);
//	printf("%c\n", p[2]);
//
//	
//	return 0;
//}
