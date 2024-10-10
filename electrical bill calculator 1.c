#include<stdio.h>
int main () {
    int customerid,unitsconsumed;
    char customername [25];
    float totalbill,chargeperunit,surcharge=0.0;

    printf("Enter customerid");
    scanf("%d", &customerid);
    printf("Enter unitsconsumed");
    scanf("%d",&unitsconsumed);
    printf("Enter customername");
    scanf("%s", &customername);

    if(unitsconsumed<=199){chargeperunit =1.20;}else if(unitsconsumed>=200 &&unitsconsumed<400)
    {chargeperunit=1.50;}else if(unitsconsumed>=400 && unitsconsumed < 600){chargeperunit=1.80;}else{chargeperunit=2.00;}

    totalbill=unitsconsumed*chargeperunit;
    if(totalbill>400){surcharge=totalbill*0.15;totalbill+=surcharge;}
   if(totalbill<100){totalbill=100;}

   printf("\nElectricity bill:\n");
   printf("customerid:%d\n",customerid);
printf("customername:%s\n",customername);
printf("unitsconsumed:%d\n",unitsconsumed);
printf("chargeperunit:%2f\n",chargeperunit);
printf("totalamounttopay:%2f\n",totalbill);
    return 0;
}