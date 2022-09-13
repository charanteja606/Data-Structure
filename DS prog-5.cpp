#include<stdio.h>
int main()
{
int x,y,*a,*b,temp;
printf("\n Enter the value of x and y");
scanf("%d%d",&x,&y);
printf("Before swapping\nx=%d\ny=%d\n",x,y);
a=&x;
b=&y;
temp=*b;
*b=*a;
*a=temp;
printf(" After swapping\nx=%d\ny=%d\n",x,y);
return 0;
}

