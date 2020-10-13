#include<stdio.h>
int main()
{
    int x=30, *y, *z;
    y=&x;// storing the address of x
    //Address of x depends from pc-pc.
    //However, integer is 4 byte size
    z=y;// declaring that z is also storing tthe address of x i.e.,1235005428
    *y++=*z++;// it will increment the address of x and change the postion of x in the memory 
    x++;//incrementing the value of x i.e, 30+1=31
    printf("x=%d, y=%d, z=%d\n",
    x, y, z);
return 0;
}