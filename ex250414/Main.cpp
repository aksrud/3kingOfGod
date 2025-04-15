#include <stdio.h>

int main() {
	int n = 10;
	int n2 = n;
	int* p = &n;
	int* p2 = p;
	printf("%d %d %d\n", n, *p, *p2);
	return 0;
}


//#include <stdio.h>
//
//int main() {
//	double d;
//	double d2 = 7.77;
//	double* pd;
//	double** ppd;
//
//	d = 5.5;
//	pd = &d;
//	ppd = &pd;
//
//	printf("%g %g %g\n", d, *pd, **ppd);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//
//	printf("%d %d %d\n", n, *p, **pp);
//	printf("%p %p %p\n", &n, &*p, &**pp);
//	printf("%p %p %p\n", &n, p, pp);
//	
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	char c = 10;
//	double d = 5.6;
//
//	char* p1 = &c;
//	double* p2 = &d;
//
//	printf("%d %g\n", c, d);
//	printf("%d %g\n", *p1, *p2);
//	printf("%p %p\n", p1, p2);
//	printf("%p %p\n", &c, &d);
//	printf("%p %p\n", *&c, *&d);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	char c = 10;
//	double d = 5.6;
//
//	char* p1 = &c;
//	double* p2 = &d;
//
//	printf("%d %g\n", *p1, *p2);
//	printf("%p %p\n", p1, p2);
//	printf("%p %p\n", &c, &d);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n = 10;
//	int* k = &n;
//
//	n = 100;
//	printf("%d %d\n", n, *k);
//	printf("%p %p\n", &n, k);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n = 10;
//	int* k = &n;
//
//	n = 100;
//	printf("%d %d\n", n, *k);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n = 10;
//	int* k = &n;
//
//	// n = 100;
//	printf("%d %d\n", n, *k);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n = 10;
//	int k = n;
//
//	n = 100;
//	printf("%d %d\n", n, k);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n = 10;
//	int k = n;
//
//	n = 100;
//	printf("%d %d\n", n, k);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	return 0;
//}


//#include <stdio.h>
//void PrintA() {
//	printf("PrintA()\n");
//}
//void PrintB() {
//	PrintA();
//	printf("PrintB()\n");
//}
//void PrintC() {
//	PrintB();
//	printf("PrintC()\n");
//}
//
//int main() {
//	PrintA();
//	PrintB();
//	PrintC();
//
//	return 0;
//}


//#include <stdio.h>
//void PrintA() {
//	printf("PrintA()\n");
//}
//void PrintB() {
//	printf("PrintB()\n");
//}
//void PrintC() {
//	PrintB();
//	printf("PrintC()\n");
//}
//
//int main() {
//	PrintA();
//	PrintB();
//	PrintC();
//
//	return 0;
//}


//#include <stdio.h>
//void PrintA() {
//	printf("PrintA()\n");
//}
//void PrintB() {
//	printf("PrintB()\n");
//}
//void PrintC() {
//	printf("PrintC()\n");
//}
//
//int main() {
//	PrintB();
//	PrintB();
//	PrintB();
//
//	return 0;
//}


//#include <stdio.h>
//void PrintA() {
//	printf("PrintA()\n");
//}
//void PrintB() {
//	printf("PrintB()\n");
//}
//void PrintC() {
//	printf("PrintC()\n");
//}
//
//int main() {
//	PrintA();
//	PrintC();
//	PrintB();
//	
//	return 0;
//}


//#include <stdio.h>
//int Increment(int k) {
//	return k+1;
//}
//
//int main() {
//	int n = 10;
//
//	printf("data : %d\n", n);
//	n = Increment(n); //n++;
//	printf("data : %d\n", n);
//	n = Increment(n); //n++;
//	printf("data : %d\n", n);
//	n = Increment(n); //n++;
//	printf("data : %d\n", n);
//	return 0;
//}


//#include <stdio.h>
//int Increment(int k) {
//	return 11;
//}
//
//int main() {
//	int n = 10;
//
//	printf("data : %d\n", n);
//	n = Increment(n); //n++;
//	printf("data : %d\n", n);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n = 10;
//
//	printf("data : %d\n", n);
//	n++;
//	printf("data : %d\n", n);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int n = 10;
//
//	printf("data : %d\n", n);
//	return 0;
//}
