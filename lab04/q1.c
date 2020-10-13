#include<stdio.h>
int main()
{

int i=3, *j, k;

j = &i;

printf("%d\n", i**j*i+*j);

return 0;

}
// The product would be 30 because vaue of i=3,
//value of *j=3. Here we are simply multiplying 3*3*3+3
//=27+3=30