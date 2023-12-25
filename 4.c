#include<stdio.h>
int main(){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    if( num%2 == 0){
        printf("This is a even number ");
    } else{
        printf("This is a  odd number ");
    }


    return 0;
}