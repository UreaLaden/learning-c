#include <stdio.h>

int Multiply(int num1, int num2)
{
    return num1 * num2;
}

int Add(int num1, int num2)
{
        return num1 + num2;
}

int main(int argc, char **argv)
{
	int length, width;
    int perimeter, area;
    
    length = 10;
    width = 5;
    
    area = Multiply(length,width);
    
    perimeter = Add(length, width) + Add(length, width);
    
    printf("The area of %d and %d is %d \n",length,width, area);
    printf("The Perimeter of %d and %d is %d \n",length,width, perimeter);
    
	return 0;
}

