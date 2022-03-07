#include <stdio.h>
int main()
{
    float m, p, c;
    printf("Enter the marks of mathematics\n");
    scanf("%f", &m);

    printf("Enter the marks of physics\n");
    scanf("%f", &p);
    printf("Enter the marks of chemestry\n");
    scanf("%f", &c);
    float avg=(m+p+c)/3;
    if (m>=33 && p>=33 && c>=33 && avg>=40)
    {
        printf("you accouired %.2f percentage, you are promoted",(float)avg);
    }
    else{
        printf("you are fail ");
    }
    return 0;
}