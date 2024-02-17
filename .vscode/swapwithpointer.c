#include<stdio.h>
void swapvariable(int *, int *);
int main()
{
    int a = 10;
    int b = 6;
    swapvariable(&a,&b);
    printf("%d\n",a);
    printf("%d",b);

    return 0;
}
void swapvariable(int *x, int *y){
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
