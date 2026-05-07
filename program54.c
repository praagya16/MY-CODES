# include<stdio.h>
int main(){
    int arr[]={12,18,47,59,57,75,30,86,83,100};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("The array elements:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nThe largest element in the array is:%d\n",max);
    return 0;
}