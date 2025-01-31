#include<stdio.h>
int binarysearch(int arr[],int size,int key){
    int start, mid,end;
    int found = 0;
    start = 0;
    end = size-1;
    while(start <= end){
        mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}
int main(){
    int a,b;
    printf("Enter number of element = ");
    scanf("%d",&a);
    int arr[a];
    for(int i =0; i<a;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter search element = ");
    scanf("%d",&b);
    int search_element = binarysearch(arr,a,b);
    printf("index = %d ",search_element);
    return 0;
}