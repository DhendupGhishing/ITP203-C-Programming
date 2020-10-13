#include <stdio.h>
int main(){
    printf("Enter the alphabet: ");
    char alphabet;
    scanf("%c",&alphabet);
    switch(alphabet){
        case 'a':
        printf("%c is  vowel",alphabet);
        break;
        case 'e':
        printf("%c is Vowel",alphabet);
        break;
        case 'i':
        printf("%c is  vowel",alphabet);
        break;
        case 'o':
        printf("%c is  vowel",alphabet);
        break;
        case 'u':
        printf("%c is vowel",alphabet);
        break;
        default:
        printf("%c It is not a vowel \n",alphabet);


    }
return 0;
}
