// // Largest number between four number;

// // #include<stdio.h>
// // #include<conio.h>
// // void main()
// // {
// //     int a,b,c,d,larg;
// //     printf("Enter the value a,b,c&d = ");
// //     scanf("%d%d%d%d", &a,&b,&c,&d);
// //     larg = a;
// //     if(b>larg){
// //         larg = b; 
// //     }
// //     if(c>larg){
// //         larg = c;
// //     }
// //     if(d>larg){
// //         larg = d;
// //     }
// //     printf("largest value = %d",larg);
// //     getch();
// // }


// // Print 1 to 20 number

// // #include<stdio.h>
// // #include<conio.h>
// // void main()
// // {
// //     int i = 1;
// //     while(i<21){
// //         printf("%d ",i);
// //         i++;
// //     }
// //     getch();
// // }

// // Print * pattern;

// // #include<stdio.h>
// // #include<conio.h>
// // void main()
// // {
// //     int i,j,k;
// //     for(i=0;i<7;i++){
// //         for(j=0;j<i;j++){
// //             printf("*");
// //         }
// //     }
// //     getch();
// // }


// // Find the largest number between two numbers using ternary operator;

// // #include<stdio.h>
// // #include<conio.h>
// // void main()
// // {
// //     int a,b,c;
// //     printf("Enter value a&b = ");
// //     scanf("%d%d",&a,&b);
// //     c = (a>b) ? printf("%d is greater",a) : printf("%d is great",b);
// //     getch();
// // }

// // Convert day to year and week;

// // #include<stdio.h>
// // #include<conio.h>
// // void main()
// // {
// //     float week , year, day;
// //     printf("Enter day = ");
// //     scanf("%f",&day);
// //     week = day/7;
// //     year = day/365;
// //     printf("week = %f \n", week);
// //     printf("year = %f", year);
// //     getch();
// // }

// // Area and parameter of circle

// // #include<stdio.h>
// // #include<conio.h>
// // void main()
// // {
// //     int A,C ,r;
// //     printf("Enter radius = ");
// //     scanf("%d", &r);
// //     A = 3.14*r*r;
// //     C = 2*3.14*r;
// //     printf("Area of Circle = %d \n", A);
// //     printf("Parameter of Circle = %d",C);
// //     getch();
// // }

// // Q9 Greatest number between two numbers using Ternary operator;

// // #include<stdio.h>
// // #include<conio.h>
// // void main()
// // {
// //     int a,b,c;
// //     printf("Enter two numbers = ");
// //     scanf("%d%d", &a,&b);
// //     c = (a>b) ? printf("%d is Greater",a) : printf("%d is Greater",b);
// //     getch(); 
// // }

// // Q10 Find Even or odd using ternary operator;

// // #include<stdio.h>
// // #include<conio.h>
// // void main()
// // {
// //     int num, A;
// //     printf("Enter Number = ");
// //     scanf("%d",&num);
// //     A = (num%2==0) ? printf("%d is Even",num) : printf("%d is odd",num);
// //     getch();
// // }



#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num & 1){
        printf("odd");
    }else{
        printf("even");
    }
    getch();
}

// // #include<stdio.h>
// // #include<conio.h>
// // void main()
// // {
// //     char operator;
// //     double num1,num2,result;
// //     printf("enter operator");
// //     scanf("%c",&operator);
// //     printf("Enter two numbers ");
// //     scanf("%lf%lf",&num1,&num2);
// //     result = (operator =='+') ? num1+num2:
// //             (operator =='-') ? num1-num2:
// //             (operator =='*') ? num1*num2:
// //             (operator =='/') ? (num2 !=0 ? num1/num2 :0):0;
// //             printf("enetr result =%2f\n",result);
// //     getch();
// // }

// // Q11 Find greatest number between three numbers using ternary operator;

// // #include<stdio.h>
// // #include<conio.h>
// // void main()
// // {
// //     int a,b,c,d;
// //     printf("Enter Number a&b&c= ");
// //     scanf("%d%d%d",&a,&b,&c);
// //     d = (a>b) ? (a>c)? printf("A is greater"): printf("C is greater"); : (b>c)? printf("b is greater");
// //     getch();
// // }


// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int marks, marks1;
//     printf("Enter Marks: ");
//     scanf("%d",&marks);
//     marks1 = (marks>0) ? (marks < 30) ? printf("Third"): (marks > 30) ? (marks < 60) :printf("Second"); : (marks > 60) ? printf("first");
//     getch();
// }