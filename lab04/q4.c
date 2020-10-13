#include <stdio.h>

void reverseSentence(){
     char sentence;
 
    scanf("%c",&sentence);
    if(sentence !='\n'){
        reverseSentence();
        printf("%c",sentence);
    }

}
int main(){
    printf("Enter the string you want to reverse \n");
    reverseSentence();
    return 0;


}