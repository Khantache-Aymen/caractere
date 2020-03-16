#include<stdio.h>
main()
{
	float a,b;
printf("donnez a et b :");
scanf("%f",&a);
scanf("%f",&b);
if (a>b)
{printf("max=%f et min=%f",a,b);
	}	
	else {
if (a<b)
printf("max= %f et min=%f",b,a);
else printf("max=min=%f",a);
	}
}
