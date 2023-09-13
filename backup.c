// NAME=MUHAMMAD ABDULLAH
// ROll no=CR-027
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <unistd.h>
int main()
{
    printf("\n\n-------------------------PROGRAM STARTED---------------------\n\n");
    char predefinedString[50] = {"Peter bhai please answer the following Question "};
    char inputString[50];
    char currentChar;
    int currentIndex = 0;
    int inputStringIndex = 0;
    int boss = 0;
    printf("Enter(this string): %s ", predefinedString);
    printf("\nEnter: ");

    while ((currentChar = getch()) != 13)
    {
        if (currentChar == 8)
        {
            putch('\b');
            putch(' ');
            putch('\b');
            currentIndex--;
            continue;
        }
        else if (currentChar == 47)
        {
            boss = 1;
            printf("%c", predefinedString[currentIndex++]);

            while (1)
            {
                currentChar = getch();

                if (currentChar == 47)
                {
                    printf("%c", predefinedString[currentIndex]);
                    currentChar = getch();
                    break;
                }
                else
                {
                    inputString[inputStringIndex++] = currentChar;
                    printf("%c", predefinedString[currentIndex++]);
                }
            }
        }
        printf("%c", currentChar);
        currentIndex++;
    }

    if (boss == 1)
    {
        printf("\n\nNOW ENTER YOUR QUESTION HERE :");
        scanf("%s");
        printf("\n\n\tTHINKING");
        sleep(3);
        printf("\n\n\"Ans=%s\"", inputString);
    }
    else
        printf("\n\nSorry, I will answer my boss only!");

    printf("\n\n----------------------PROGRAM ENDED---------------------");

    return 0;
}
// Because this is actually useless for