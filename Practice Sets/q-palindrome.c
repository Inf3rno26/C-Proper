#include <stdio.h>
#include <string.h>

int main (){
    char word[50];
    char rev[50];

    printf("Enter your word: ");
    fgets(word, sizeof(word), stdin);
    word[strlen(word)-1]  = '\0';

    strcpy(rev, word);
    strrev(rev);

    printf("Reversed: %s \n", rev);

    if (strcmp(rev,word) == 0)
    {
        printf("This is a Palindrome \n");
    }
    else
    {
        printf("This is not a Palindrome");
    }

    return 0;
}
