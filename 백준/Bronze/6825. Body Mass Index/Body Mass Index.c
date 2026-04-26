#include <stdio.h>

int main(void)
{
	float weight;
	float height;
	float bmi;
	
	scanf("%f", &weight);
	scanf("%f", &height);
	
	bmi = weight / (height * height);
	
	if (bmi > 25.0f)
	{
		printf("Overweight");
	}
	else if (bmi < 18.5f)
	{
		printf("Underweight");
	}
	else
	{
		printf("Normal weight");
	}
	
	return 0;
}