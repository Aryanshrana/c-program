#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int rn = 1;rn<=n;rn++){
        //spaces
        for(int sp = 1;sp<=2*(n-rn);sp++){
            printf(" ");
        }
        //nums
        for(int num = 1;num<=rn;num++){
            printf("%d",num);
        }
        if(rn != 1){
            //spaces
            for(int sp = 1;sp<=2*rn-3;sp++){
                printf(" ");
            }
            //mums
            for(int num = 1;num<=rn;num++){
                printf("%d",rn-num+1);
            }
        }
        printf("\n");
    }
    for(int rn = n-1;rn>=1;rn--){
        //spaces
        for(int sp = 1;sp<=2*(n-rn);sp++){
            printf(" ");
        }
        //nums
        for(int num = 1;num<=rn;num++){
            printf("%d",num);
        }
        if(rn != 1){
            //spaces
            for(int sp = 1;sp<=2*rn-3;sp++){
                printf(" ");
            }
            //mums
            for(int num = 1;num<=rn;num++){
                printf("%d",rn-num+1);
            }
        }
        printf("\n");
    }
}