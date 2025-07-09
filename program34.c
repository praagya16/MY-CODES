# include<stdio.h>
int main(){
//Displaying number of elements in array
int i,n;
printf("Enter the no of elements:\n");
scanf("%d",&n);
int arr[n];
//Displaying elements into the array
printf("Enter the %d elements:\n",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
// displaying array in reverse order
for(i=n-1;i>=0;i--){
    printf("%d ",arr[i]);
} 
return 0;
}