#include <stdio.h>
#include <string.h>

int main() {
//stores the  maximum amount of input words
char word[50];
//prompts users for input
printf("Enter Your word in Capital letters\n");
// waits for user input
scanf("%s", word);
//loops through the input
for(int i = 0, wordLength = strlen(word); i < wordLength; i++) {
//if the letter of the input is between the capital of a and z minus 32 from its ASCII code
    if(word[i] >= 'A' && word[i] <= 'Z') {
        printf("%c translates to %c", word[i], word[i] - ('a' - 'A'));
//else if the letter of the input is between  a and z minus 64 from its ASCII code
    } else if(word[i] >= 'a' && word[i] <= 'z'){
        printf("%c translates to %c", word[i], word[i] - 64);
    }
    printf("\n");
  }
}
