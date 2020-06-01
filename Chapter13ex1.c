// Example program #1 from Chapter 13 of Absolute Beginner's GUide
// to C, 3rd Edition
// File Chapter13ex1.c

/* This program asks for a number from 1 to 100 and tells then
whether or not dtheir choice is equally divisible by 2 through 9. */

#include <stdio.h>

int main(void)
{
    // Define the integer to hold the user's guess and then get it
    // from the user

    int numPick;
    printf("Pick and integer between 1 and 100 ");
    printf("(The higher the better!)\n");
    scanf(" %d", &numPick); //remember for an int, you do need thee &

    printf("%d %s divisible by 2.", numPick, (numPick % 2 == 0) ? ("is") : ("is not"));
    printf("\n%d %s divisible by 3.", numPick, (numPick % 3 == 0) ? ("is") : ("is not"));
    printf("\n%d %s divisible by 4.", numPick, (numPick % 4 == 0) ? ("is") : ("is not"));
    printf("\n%d %s divisible by 5.", numPick, (numPick % 5 == 0) ? ("is") : ("is not"));
    printf("\n%d %s divisible by 6.", numPick, (numPick % 6 == 0) ? ("is") : ("is not"));
    printf("\n%d %s divisible by 7.", numPick, (numPick % 7 == 0) ? ("is") : ("is not"));
    printf("\n%d %s divisible by 8.", numPick, (numPick % 8 == 0) ? ("is") : ("is not"));
    printf("\n%d %s divisible by 9.", numPick, (numPick % 9 == 0) ? ("is") : ("is not"));
    printf("\n");

    return 0;
}