#include<stdio.h>
int main(){
    int ***r, **q, *p, i=8;
    p = &i;//p is storing the value of i;
    q = &p;// q is storing the value of p i.e, inital value of i
    r = &q;//r is storing the value of q i.e, inital value of q 
    printf("%d, %d, %d\n", *p,**q, ***r);//Thus it will print 8,8,8
    return 0;

}




