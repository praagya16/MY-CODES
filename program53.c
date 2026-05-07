# include<stdio.h>
int main(){
    /*1
      2 3
      4 5 6
      7 8 9 10*/
      int i,j,n,count=1;
      printf("Enter the number of rows and columns:\n");
      scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
               printf("%d\t",count);
            }
        }
}
