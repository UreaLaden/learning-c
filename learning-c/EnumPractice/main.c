#include <stdio.h>

int main(int argc, char **argv)
{
	enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    
    enum Company firstCompany = XEROX;
    enum Company secondCompany = GOOGLE;
    enum Company thirdCompany = EBAY;
    
    printf("%d\n",firstCompany);
    printf("%d\n",secondCompany);
    printf("%d\n\a",thirdCompany);
    
	return 0;
}
