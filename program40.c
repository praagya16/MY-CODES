# include<stdio.h>
int main(){
    int i,n,j,k=5;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++,k--){
        for(j=i;j>0;j++){
            printf("%d ",k);
        }
    }
}