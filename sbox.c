#include<stdio.h>
#include<stdint.h>
int main()
{
uint32_t x,y,a,b,c,p,q;
int mask1=1;
int mask2=32;
printf("enter any no.:");
scanf("%d",&x);
y=x&mask1;
printf("y=%d\n",y);
a=x&mask2;
printf("a=%d\n",a);
b=a>>4;
printf("b=%d\n",b);
c=y|b;
printf("row no :%d\n",c);
int mask3=0x1E;
p=x&mask3;
printf("p=%d\n",p);
q=p>>1;
printf("column no: %d\n",q);
static const uint32_t s[4][16] =
{
  14,  0,  4, 15, 13,  7,  1,  4,  2, 14, 15,  2, 11, 13,  8,  1,
   3, 10, 10,  6,  6, 12, 12, 11,  5,  9,  9,  5,  0,  3,  7,  8,
   4, 15,  1, 12, 14,  8,  8,  2, 13,  4,  6,  9,  2,  1, 11,  7,
  15,  5, 12, 11,  9,  3,  7, 14,  3, 10, 10,  0,  5,  6,  0, 13};
int i,j;
{
printf("SBox subsequent value[%d][%d]=%d\n",c,q,s[c][q]);
}
return(0);
}
