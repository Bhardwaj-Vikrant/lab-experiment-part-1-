#include<stdio.h>
float conv_to_fahr(float celsius);//Declartion of functions
float conv_to_cel(float fhar);
int main(){
    float celsius;
    printf("Enter temparture in celsius : ");
    scanf("%f",&celsius);
    printf("Temprature in fahrenheit is %f F",conv_to_fahr(celsius));//calling funcuion to convert temp to fhar

    float fhar;
    printf("\nEnter temparture in fharenheit : ");
    scanf("%f",&fhar);
    printf("Temprature in celsius is %f C",conv_to_cel(fhar));//calling funcyion to convert temp to celsius

    return 0;
}



float conv_to_fahr(float celsius ){//defination of funcyions
    return (celsius*9/5 + 32) ;
}

float conv_to_cel(float fhar){
    return ((fhar - 32)*5/9);
}