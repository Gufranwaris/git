#include<stdio.h>
int main()
{
    float a,b,c;
   printf("enter any three number");
   scanf("%f\n%f\n%f",&a,&b,&c);
   avg(a,b,c);
return 0;
}
avg(x,y,z)
  float x,y,z;
{
    float f=(x+y+z)/3;
   printf("average of three number %f , %f and %f is : %.2f",x,y,z,(float)f);
    
}