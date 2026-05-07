#include <stdio.h>
int main(){
    int i,j,n,k=1;
  printf("Enter the no of lines:\n");
  scanf("%d",&n);
  printf("Floyd Triangle:");
  for(i=1;i<=n;i++)
  {
    for(j=i;j<=n;j++,k++){
    printf("%d",j);
    }
    printf("\n");
  }
}