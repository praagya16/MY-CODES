# include<stdio.h>
int main(){
   int i,n,num1,num2,next_num;
   printf("Enter a number:");
   scanf("%d",&n);
   num1=0;
   num2=1;
   printf("Fibonaci series:%d%d",num1,num2);
   for(i=3;i<=n;++i){
   printf("%d",next_num);
   next_num=num1+num2;
   num1=num2;
   num2=next_num;
   next_num=num1+num2;
   return 0;
   }
}