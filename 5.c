#include<stdio.h>
int fact(int n );
int main(){
    int n ; 
    printf("Enter the number : ");
    scanf("%d",&n);
    int product = fact(n);
    printf("factorial is equal to %d ",product);

}

int fact(int n ){
    if( n==0 ){
    return 1; 
    }
    int product = n * fact(n-1);
    return product;
 }