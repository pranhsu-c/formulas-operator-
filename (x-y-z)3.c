#include<stdio.h>

main()
{
   	int x=10,y=5,z=50,c;
   	
   	c=x*x*x-y*y*y-z*z*z-3*x*x*y+3*x*y*y-3*y*y*z-3*y*z*z+3*x*z*z-3*x*x*z+6*x*y*z;
   	
   	printf("(x-y-z)3=%d",c);
}
