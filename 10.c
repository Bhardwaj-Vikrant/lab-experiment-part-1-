#include<stdio.h>
void swap(int a,int b);//function to swap using third variable
void swap_(int a , int b);//function to swap without using third variable
int main(){
    int a ,b ;
    printf("Enter the frist element a = ");//input of two numbers
    scanf("%d",&a);
    printf("Enter the second element b = ");
    scanf("%d",&b);

    swap(a,b);
    swap_(a,b);
    return 0 ;
}

void swap(int a , int b){
    int c = a;
    a = b ;
    b = c ; 
    printf("Value of a is %d \n",a);
    printf("Value of b is %d \n",b);
}

void swap_(int a , int b ){
    a = a + b ;
    b = a - b ;
    a = a - b ;
    printf("\nValue of a is %d \n",a);
    printf("Value of b is %d \n",b);
}