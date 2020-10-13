#include <stdio.h>
int main()
{
int *ptr;
int x;
ptr = &x;//*PTR is poiting x and x =0;
*ptr = 0;
printf(" x = %d\n", x);//prints the value of  x

printf(" *ptr = %d\n", *ptr);//prints the value of x as it is pointed to x
*ptr += 5;// incrementing the value of x by 5
printf(" x = %d\n", x);// Thus it will print 5 because *ptr stores the value x
printf(" *ptr = %d\n", *ptr);// it will print 5 becasuse it is incremented by 5 initially
(*ptr)++;// again it is incremented by 1, so it becomes 5+1=6
printf(" x = %d\n", x);//it will print 6
printf(" *ptr = %d\n", *ptr);//it will print 6
return 0;
}


