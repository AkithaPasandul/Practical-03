#include <stdio.h>
int main()
{
    int bs,yos,ms;
    char city;
    int additionalallowance=0;
    int bonuspersentage=0;
    int bonusamount=0;
    int gr=0;
    printf("Enter Basic salary");
    scanf("%d",&bs);
    printf("Enter year of service");
    scanf("%d",&yos);
    printf("Enter monthly sales amount");
    scanf("%d",&ms);
    printf("Is salesman working on colombo?");
    scanf("%d",&city);
    if(yos>5)
    {
        additionalallowance=bs*0.1;
    }
    if(city=='c')
    {
        additionalallowance+= 2500;
    }
    if(ms<2500)
    {
        bonuspersentage=10;
    }
    else if(ms>=2500 && ms<50000)
    {
        bonuspersentage=12;
    }
    else if(ms>=50000)
    {
        bonuspersentage=15;
    }
    bonusamount=ms*bonuspersentage/100;
    gr=bs+additionalallowance+bonusamount;
    printf("Gross Monthly Remueration %d\n",gr);



}
