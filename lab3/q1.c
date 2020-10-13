#include <stdio.h>
int main(){
int marks;
printf("Enter the marks you want Grade");
scanf("%d",&marks);
if(marks>100 && marks<0){
    printf("Marks cannot be graded above 100 and below 0");

}
else{
   switch (marks/10)
   {
   case 10:
       printf("A++");
       break;
    case 9:
       printf("A++");
       break;
    case 8:
       printf("A");
       break;
   case 7:
       printf("B++");
       break;

    case 6:
       printf("B");
       break;

    case 5:
       printf("c++");
       break;

    case 4:
       printf("C");
       break;
    case 3:
       printf("D");
       break;
    case 2:
       printf("F");
        break;
   
   default:
        printf("F");

       break;
   }

}
}