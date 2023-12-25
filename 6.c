#include<stdio.h>
int main(){
    int arr[13] = {7,8,4,5,3,2,100,78,42,1,6,34,54};//defination of arrary of integers
    for(int i  = 0 ; i < 13 ; i++){
        if(i % 2 != 0){//seprating odd integers bu mod oprator
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}