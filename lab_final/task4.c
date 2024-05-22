#include <stdio.h>

int main()
{
	int length = 0;
	char str[100] ;
	gets(str);
	char string ;
	scanf("%c", &string);

	for (int i = 0; str[i] != '\0'; i++)
		length++;

	for (int i = 0; i < length; i++)
		if (str[i] == string)
			printf("'%c' is found at index - %d\n", string, i);
	return 0;
}