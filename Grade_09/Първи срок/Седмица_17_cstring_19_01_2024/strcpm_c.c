// C program to illustrate
// strcmp() function
#include<stdio.h>
#include<string.h>
int main()
{
	// b has less ASCII value than g
	char first_str[] = "bz";
	char second_str[] = "zb";

	int res = strcmp(first_str, second_str);

	if (res==0)
		printf("Strings are equal");
	else
		printf("Strings are unequal");

	printf("\nValue returned by strcmp() is: %d" , res);


	return 0;
}

