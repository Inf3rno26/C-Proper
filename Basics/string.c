#include <stdio.h>
#include <string.h>

int main ()
{
    char word[50];
    char newWord[50];

    printf("Enter a word: ");
    fgets(word,sizeof(word), stdin);
    word[strlen(word)-1] = '\0';

    printf("%s \n",word);
    printf("%d \n", strlen(word));
    
    //upper
    strupr(word);
    

    //copy
    strcpy(newWord,word);
    printf("%s", newWord);
}