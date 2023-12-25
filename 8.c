#include<stdio.h>
int main(){
    int arr[] = {12,93,44,6,59,646,76,47,77,778,88};
    int sum = 0;
    for(int i = 0; i<11; i++){
        sum = sum + arr[i];
    }
    printf("%d is the sum of all the element of this array ",sum);
    return 0; 
}