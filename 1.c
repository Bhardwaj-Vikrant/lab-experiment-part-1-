#include<stdio.h>
float cal_si(float prnc , float rate, float time);
int main(){
    float prnc,rate,time;
    printf("enter your principle amount : ");/*taking input */
    scanf("%f",&prnc);
    printf("enter your rate of interest per year : ");
    scanf("%f",&rate);
    printf("enter your time in years : ");
    scanf("%f",&time);


    float si = cal_si(prnc,rate,time);/*calliing function to calculate simple interest*/
    printf("your simple interest would be %f ",si);

    return 0;

}
float cal_si(float prnc, float rate , float time){
    float si = (prnc * rate * time)/ 100 ; //function defination
    return si ;
}
