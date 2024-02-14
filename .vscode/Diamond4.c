#include<stdio.h>
int main()
{
    int rows = 4;
    for(int i = 0;i<rows;i++)
    {
        for(int j = 0;j<(rows-i)-1;j++){
            printf(" ");
        }
        for(int k =0;k<=i;k++){
            printf("%d ",k+1);
        }
        printf("\n");
    }
    int row2 = rows -1;
    for(int i = row2;i>0;i--){
        for(int j = 0;j<=row2 - i;j++){
            printf(" ");
        }
        for(int k = 0;k<i;k++){
            printf("%d ",k+1);
        }
        printf("\n");
    }
    return 0;
}