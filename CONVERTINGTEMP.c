#include<stdio.h>
int main()
{
	float centigrate,farenheit,kelvin;
		printf("enter the temperature in centigrate:");
		scanf("%f",&centigrate);
		farenheit=centigrate*9/5+32;
		kelvin=centigrate+273;
		printf("the teemperature n faarenheit is %f\n", farenheit);
		printf("the temperature in kelvin is %f", kelvin);

	return 0;
	
}
