# include<stdio.h>
int main(){
    int matrice1[3][3],matrice2[3][3],SUM[3][3];
    printf("Enter the elements of the first matrice1\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("matrice[i][j]:",i,j);
            scanf("%d",&matrice1[i][j]);
        }
    }
    printf("Enter the elements of the second matrice2\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("matrice[i][j]:",i,j);
            scanf("%d",&matrice2[i][j]);
        }
    }
}