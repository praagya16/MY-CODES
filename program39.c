# include<stdio.h>
int main(){
    int i,j,k=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Floyed Triangle:\n");
    for(i=1;i<=n;i++,k++)
    {
        for(j=1;j<=i;j++){
            printf("%d ",k);
        }
        printf("\n");
    }
}