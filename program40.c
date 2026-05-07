# include<stdio.h>
int main(){
    int i,n,j,k;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=n;i<=n;i--){
       for(j=1;j<=i;j++){
        printf("%d",i);
       }
       printf("\n");
    }
}