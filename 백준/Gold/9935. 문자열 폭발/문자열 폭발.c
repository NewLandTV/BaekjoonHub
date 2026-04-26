#include <stdio.h>
#include <string.h>
#include <memory.h>

int main(void)
{
	int i, j, l = 0;
	int temp;
	char* str;
	char* result;
	char explosionStr[37];
	int strLen;
	int explosionStrLen;
	
	str = (int*)malloc(sizeof(int) * 1000000);
	result = (int*)malloc(sizeof(int) * 1000000);
	
	scanf("%s", str);
	scanf("%s", explosionStr);
	
	strLen = strlen(str);
	explosionStrLen = strlen(explosionStr);
	
	for (i = 0; i < strLen; i++)
	{
		result[l++] = str[i];
		
		if (l < explosionStrLen)
		{
			continue;
		}
		
		temp = l - explosionStrLen;
		
		for (j = temp; j < l; j++)
		{
			if (result[j] != explosionStr[j - temp])
			{
				break;
			}
		}
		
		if (j == l)
		{
			l -= explosionStrLen;
		}
	}
	
	result[l] = 0;
	
	printf("%s", l ? result : "FRULA");
	free(str);
	free(result);
	
	return 0;
}