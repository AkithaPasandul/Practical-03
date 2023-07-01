#include<stdio.h>
int main()
{
  int no1,no2,no3,l,s;
  printf("Enter Three numbers");
  scanf("%d %d %d",&no1,&no2,&no3);
   if (no2>l)
        l=no2;
   if (no3>l)
        l=no3;
   if (no2 <s)
        s=no2;
   if (no3 <s)
        s=no3;
  printf("Largest number: %d\n",l);
  printf("Smallest number: %d\n",s);
}
