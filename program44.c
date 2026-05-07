# include<stdio.h>
int main(){
    int a,b;
   printf("Enter the first number:\n");
   scanf("%d",&a);
   printf("Enter the second number:\n");
   scanf("%d",&b);
   if (a%b==0){
    printf("%d is the multiple of %d\n",a,b);
   } 
   else{
    printf("%d is not the multiple of %d",a,b);
    return 0;
   }
}