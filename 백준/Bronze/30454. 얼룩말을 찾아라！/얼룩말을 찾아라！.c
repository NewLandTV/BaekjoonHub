#include <stdio.h>
#include <string.h>

void PreprocessString(char* str);
int CountStripes(char* str);

int main(void)
{
	int n, l;
	char str[1001];
	int s = 0, h = 0;
	int count;
	
	scanf("%d %d", &n, &l);
	
	for (; n > 0; n--)
	{
		scanf("%s", str);
		PreprocessString(str);
		
		count = CountStripes(str);
		
		if (count < s)
		{
			continue;
		}
		
		if (count == s)
		{
			h++;
			
			continue;
		}
		
		s = count;
		h = 1;
	}
	
	printf("%d %d", s, h);
	
	return 0;
}

void PreprocessString(char* str)
{
	int i;
	char c = str[0];
	char result[1001] = "";
	int l = strlen(str);
	int cur = 1;
	
	result[0] = c;
	
	for (i = 1; i < l; i++)
	{
		if (c != str[i])
		{
			result[cur++] = str[i];
			c = str[i];
		}
	}
	
	strcpy(str, result);
}

int CountStripes(char* str)
{
	int i;
	int count = 0;
	int l = strlen(str);
	
	for (i = 0; i < l; i++)
	{
		if (str[i] == '1')
		{
			count++;
		}
	}
	
	return count;
}