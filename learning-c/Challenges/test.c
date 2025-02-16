/*
 * Author: Leaundrae Mckinney
 * Purpose: This program accepts a name and prints it to the screen
 * */
 
#include <stdio.h>

int main()
{
    printf("Hi my name is ");
    char myName[50];
    
    scanf("%49s", myName);
    
    printf("Nice to meet you %s!\n ",myName);
    
    return 0;
}