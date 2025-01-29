#include<stdio.h>
void printFibonacci(int num){
    int a = 0,b=1,next;
    printf("%d %d",a,b);
    for(int i=1; i<=num; i++){
        next=a+b;
        printf(" %d",next);
        a=b;
        b=next;  
    }   
}
int main(){
    int number;
    printf("Enter the number = ");
    scanf("%d",&number);
    printFibonacci(number);
    return 0;    
}