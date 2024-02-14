#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x = 1;

    for(int i = 2;i<=n;i++){
        int div = 1;
        for(int j =2;j*j<=i;j++)
        {
            if(i % j == 0){
                div = div + 1;
                break;
            }
        }
        if(div == 1){
            printf("%d\t",i);
        }

    }
    return 0;
    
}