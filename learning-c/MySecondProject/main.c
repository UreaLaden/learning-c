#include <stdio.h>

int main(int argc, char **argv)
{
    int myFavoriteNumber = 0;
    
    printf("Please enter your favorite number: ");
    
    scanf("%d", &myFavoriteNumber);
    
    printf("Great! Your favorite number is %d\n", myFavoriteNumber);
    
	return 0;
}
