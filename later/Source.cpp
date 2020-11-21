#include <stdio.h>
#include <string>
float interestCal(float* ptr, int i);
int main()
{
	float data[3];
	const char* word[3] = { "Deposit","Interest Rate","Number of Months" };
	float* ptr;
	ptr = &data[0];
	for (int i = 0; i < 3; i++)
	{
		printf("Insert Your %s :",word[i]);
		do {
			scanf_s("%f", &data[i]);
			if (data[i] < 0)
				printf("Insert Your %s Again :", word[i]);
		} while (data[i] < 0);
	}
	printf("Your Interest :%f", interestCal(ptr, 3));
	return 0;
}
float interestCal(float* ptr, int i)
{
	float interest, res = 1;
	for (int j = 0; j < i; j++)
	{
		res *= *ptr;
		*ptr++;
	}
	interest = res / 1200;
	return interest;
}
