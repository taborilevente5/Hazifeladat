#include <stdio.h>

int main()
{
	int a,b;
	printf("Kérem a téglalap A oldalát:\n");
	scanf("%d", &a);
	printf("Kérem a téglalap B oldalát:\n");
	scanf("%d", &b);
	int terulet = a*b;
	int kerulet = 2*(a+b);
	printf("A téglalap kerülete, 2 * (%d + %d) = %d cm\n", a, b, kerulet);
	printf("A téglalap területe, %d * %d = %d cm^2\n", a, b, terulet);
	
	
	return 0;
	

}
