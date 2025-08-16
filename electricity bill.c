#include <stdio.h>

int main() {
    float unit,charge,surcharge,total;
    printf("enter electricity units");
    scanf("%f",&unit);
    if(unit<=50)
    charge=unit*0.50;
    else if(unit>=50&&unit<=150)
    charge=50*0.50+(unit-50)*0.75;
    else if(unit>150)
    charge=50*0.50+100*0.75+(unit-150)*1.20;

surcharge=charge*0.20;
total=surcharge+charge;
printf("charge=%.2f\n",charge);
printf("surcharge=%.2f\n",surcharge);
printf("total=%.2f\n",total);
}