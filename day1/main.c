#include <stdio.h>
#include <stdlib.h>

int sum(int A[]);

int main()
{
	FILE *fp = fopen("input.txt", "r");
	int input[200];

	int i = 0;
	int num;

	while (fscanf(fp, "%d", &num) == 1)
	{
		input[i] = num;
		i++;
	}

	// part 1:
	//

	for (int j = 0; j < 200; j++)
	{
		for (int k = 0; k < 200; k++)
		{
			if (input[j]+input[k]+input[l]==2020)
			{
				printf("Part 2 solution: %d\n", input[j]*input[k]*);
				break;
			}
		}
	}
	

	for (int j = 0; j < 200; j++)
	{
		for (int k = 0; k < 200; k++)
		{
			for (int l = 0; l < 200; l++)
			if (input[j]+input[k]+input[l]==2020)
			{
				printf("Part 2 solution: %d\n", input[j]*input[k]*input[l]);
				break;
			}
		}
	}


	fclose(fp);
}

