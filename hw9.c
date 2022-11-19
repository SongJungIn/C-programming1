#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		printf("%c", ch + diff);
	else if (ch >= 'a' && ch <= 'z')
		printf("%c", ch - diff);
	else	
		printf("%c",ch);
}

int main(void)
{
	char ch[100];
	int i;
	printf("Input> ");
	fgets(ch, sizeof(ch), stdin);
	
	for (i = 0; i < strlen(ch); i++)
		if (ch[i] != ' ')
			convCase(ch[i]);
		else if (ch[i] == ' ')
			printf(" ");
	return 0;
}