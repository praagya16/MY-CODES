# include<stdio.h>
int main(){
    int i,n,flag=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
    if(n%i==0){
        flag=1;
        printf("THIS IS NOT A PRIME NUMBER\n");
        break;
    }
    if(n%i!=0)
    flag=0;
    printf("THIS IS A PRIME NUMBER\n");
    return 0;
  }
}
