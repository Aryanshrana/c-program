#include<stdio.h>
int main() {
    int arr[] = {9,7,3,1,10,2,5,4,8,6};
    int array[10] = {0};

    for(int i = 1;i<=10;i++)
    {
        int count = 0;
        for(int j = 0;j<sizeof(arr)/sizeof(arr[0]);j++) {
            if(arr[j] != i){
                count = count + 1;
            }
            else{
                count = count + 1;
                array[i-1] = count;
                for(int k = j;k<sizeof(arr)/sizeof(arr[0])-1;k++){
                    arr[k] = arr[k+1];
                }
                break;
            }
        }
    }
    for(int z=0;z<10;z++){
        printf("%d\n",array[z]);
    }
    return 0;
}