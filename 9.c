#include<stdio.h>
int main(){
    int arr[] = {12,93,44,6,59,646,76,47,77,778,88};
    int size = sizeof(arr);

    float sum = 0;
    for(int i = 0; i<11; i++){
        sum = sum + arr[i];
    }
    float avg = sum / size; 
    printf("Average of the elements of this array is : %f \n",avg);



    int largest = arr[0];//assuming any(frist) element to be largest
    for(int i = 1 ; i<11 ; i++){
            if(arr[i] > largest){
                largest = arr[i];//updating the value of largest 
            }
        }    
        printf("%d is the largest element in the array \n",largest);



    int smallest = arr[0];//assuming any(frist) element to be smallest
    for(int i = 1 ; i<11 ; i++){
            if(arr[i] < smallest){
                smallest = arr[i];//updating the value of smallest 
            }
        }    
        printf("%d is the smallest element in the array \n",smallest);

}