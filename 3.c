#include<stdio.h>
int main(){
    int num;
    printf("enter the natural number :");
    scanf("%d",&num);
    int sum = 0;
    for(int i = 1 ; i <= num ; i++){
        sum = sum + i ; 
    }
    printf("Sum of all natural numbers upto %d would be %d ",num,sum);
    return 0;
}