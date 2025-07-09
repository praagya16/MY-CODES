# include<stdio.h>
# include<conio.h>
int main(){
    int N,X,i;
    printf("Enter a number:");
    scanf("%d",&N);
    X=(N*2)-1;
    for(i=X;i>0;i=i-2)
    printf("%d ",i);
    return 0;
}