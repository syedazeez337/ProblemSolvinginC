#include <stdio.h>

int main(void) {


    printf("Capital Alphabets: ");
    for(int i = 65; i <= 90; i++)
    {
        printf("%c ", i);
    }
    printf("\n");

    printf("Normal Alphabets:  ");
    for(int i = 97; i <= 122; i++)
    {
        printf("%c ", i);
    }
    printf("\n");

    return 0;
}