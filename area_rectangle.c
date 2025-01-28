#include<stdio.h>
#include<conio.h>
void main()
{
    int r,l,w;
    printf("Enter length =");
    scanf("%d", &l);
    printf("Enter width =");
    scanf("%d", &w);
    r = l*w;
    printf("Area of rectangle is = %d",r);
    getch();
}