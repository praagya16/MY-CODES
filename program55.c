#include<stdio.h>
int main(){
int a=50;
int *ptr=&a;
*ptr=100;
int **ptr2=&ptr;
printf("%d",**ptr2);
}