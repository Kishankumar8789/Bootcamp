#include<stdio.h>
#include<conio.h>
void main()
{
    int a,parameter,area;
    printf("Enter value = ");
    scanf("%d",&a);
    area = a*a;
    parameter = 4*a;
    printf("area of square = %d\n", area);
    printf("parameter of square = %d", parameter);
    getch();
}