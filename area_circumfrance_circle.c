#include<stdio.h>
#include<conio.h>
void main()
{
    float area,circum,r;
    printf("Enter value radius =");
    scanf("%f",&r);
    area = 3.14*r*r;
    circum = 2*3.14*r;
    printf("area of circle = %f \n",area);
    printf("circumfrance of circle = %f",circum);
    getch();
}