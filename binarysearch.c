#include<stdio.h>
int binarysearch(int arr[],int size,int key){
    int start,mid,end;
    start = 0;
    end = size-1;
    while(start <= end){
        mid = (start + end)/2;
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
    int arr[] = {1,2,5,10,14,15,16,18,20};
    int size = sizeof(arr)/sizeof(int);
    int key = 18;
    int search_element = binarysearch(arr,size,key);
    printf("The element found is = %d\n",key);
    printf("Index = %d",search_element);
    return 0;
}