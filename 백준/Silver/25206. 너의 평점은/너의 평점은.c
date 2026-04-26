#include <stdio.h>

float GetGradeBySubject(char* name);

int main(void)
{
	int i;
	char subjectName[51];
	float credit;
	char subjectGrade[20];
	float creditGradeSum;
	float creditSum;
	
	for (i = 0; i < 20; i++)
	{
		scanf("%s %f %s", subjectName, &credit, subjectGrade);
		
		if (subjectGrade[0] == 'P')
		{
			continue;
		}
		
		creditGradeSum += credit * GetGradeBySubject(subjectGrade);
		creditSum += credit;
	}
	
	printf("%f", creditGradeSum / creditSum);
	
	return 0;
}

float GetGradeBySubject(char* name)
{
	if (name[0] == 'F')
	{
		return 0.0f;
	}
	
	float plus = name[1] == '+' ? 0.5f : 0.0f;
	
	if (name[0] == 'A')
	{
		return 4.0f + plus;
	}
	if (name[0] == 'B')
	{
		return 3.0f + plus;
	}
	if (name[0] == 'C')
	{
		return 2.0f + plus;
	}
	if (name[0] == 'D')
	{
		return 1.0f + plus;
	}
}