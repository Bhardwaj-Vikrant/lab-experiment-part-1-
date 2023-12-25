#include<stdio.h>
int main(){
    int arr[] = {11,99,24,46,99,34,97,24,57,78,88};
    int largest = arr[0];//assuming any(frist) element to be largest
    for(int i = 1 ; i<11 ; i++){
            if(arr[i] > largest){
                largest = arr[i];//updating the value of largest 
            }
        }    
        printf("%d is the largest element in the array \n",largest);

        return 0;
}