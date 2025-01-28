// print pattern *
//               **
//               ***
//               ****

#include<stdio.h>
int main(){
    int i,j;
    for(i=6; i>=1; i--){
        for(j=1; j<=i; j++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}



// print pattern ****
//                ***
//                 **
//                  *

#include<stdio.h>
int main(){
    int i,j,k;
    for(i=4; i>=1; i--){
        for(k=4; k>=i+1; k--){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
