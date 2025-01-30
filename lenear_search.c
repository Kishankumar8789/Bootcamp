#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter no. of element = ");
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter search element = ");
    scanf("%d", &b);
   int found = 0;
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == b)
        {
            printf("Index %d \n", i);
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("Not Found");
    }
    return 0;
}