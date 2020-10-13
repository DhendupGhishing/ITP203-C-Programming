//2) Write a C Program to swap 4-different elements using Call by Reference.
#include <stdio.h>
int swap(int *w,int *x,int *y, int *z)
{
    int emptycontainer;
    emptycontainer=*w;
    *w=*x;
    *x=*y;
    *y=*z;
    *z=emptycontainer;


}
int main(){
    int a=1, b=2, c=3, d=4;
    swap(&a,&b,&c,&d);
    printf ( "\na = %d  b = %d c = %d d = %d", a, b, c, d ) ;

}
