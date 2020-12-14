#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
	FILE *fp = fopen("input.txt", "r");

	int min, max;
	char chr;
	char pw[512];
	int counta, countb = 0;


	while (fscanf(fp, "%d-%d %c: %s\n", &min, &max, &chr, pw) != -1)
	{
		//printf("min: %d, max: %d, key: '%c', line: %s\n", min, max, chr, pw);
		int i;
		int chrcount = 0;
		for (i = 0; i < strlen(pw); i++)
		{
			if (pw[i] == chr)
			{
				chrcount++;
			}
		}
		if (min <= chrcount && chrcount <= max)
		{
			counta++;
		}
		if (pw[(min-1)] == chr)
		{
			if (pw[(max-1)] != chr)
				countb++;
		}
		else if (pw[(max-1)] == chr)
		{
			if (pw[(min-1)] != chr)
				countb++;
		}
	}
	printf("Total ok passwords in first part: %d\n sec part: %d\n", counta, countb);
}


