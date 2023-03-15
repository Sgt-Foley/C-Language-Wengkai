#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char word[8];
	char word2[8];
	scanf("%s", word);
	scanf("%s", word2);
	printf("%s##%s##\n", word,word2);

	return 0;
}