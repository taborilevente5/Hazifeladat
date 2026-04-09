#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
	float r;
	printf("Add meg a kör sugarát:\n");
	scanf("%f", &r);
	float d = 2*r;
	float kerulet = d * M_PI;
	float terulet = (r*r) * M_PI;
	printf("A kör kerülete: %.1f\n", kerulet);
	printf("A kör területe: %.1f\n", terulet);
	return 0;


}
