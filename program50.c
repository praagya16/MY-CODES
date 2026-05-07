#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of rows and columns:\n");
    scanf("%d",&n);
     i=1;
   while(i<=n){
     j=1;
    while(j<=n){
        printf("*");
        j++;
   }
    printf("\n");
    i++;
 }
}