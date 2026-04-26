#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char bin[103], temp1[103], temp2[3];
	char oct[35];
	int bLen, oLen = 0;
	
	scanf("%s", bin);
	
	bLen = strlen(bin);
	
	if (bLen % 3 != 0)
	{
		for (i = 0; i < 3 - bLen % 3; i++)
		{
			temp2[i] = '0';
		}
		
		temp2[i] = 0;
		
		sprintf(temp1, "%s%s", temp2, bin);
		strcpy(bin, temp1);
		
		bLen += 3 - bLen % 3;
	}
	
	for (i = 0; i < bLen; i += 3)
	{
		if (bin[i] == '0')
		{
			if (bin[i + 1] == '0')
			{
				oct[oLen++] = (bin[i + 2] == '0' ? '0' : '1');
				
				continue;
			}
			
			oct[oLen++] = (bin[i + 2] == '0' ? '2' : '3');
			
			continue;
		}
		
		if (bin[i + 1] == '0')
		{
			oct[oLen++] = (bin[i + 2] == '0' ? '4' : '5');
			
			continue;
		}
		
		oct[oLen++] = (bin[i + 2] == '0' ? '6' : '7');
	}
	
	oct[oLen] = 0;
	
	printf("%s", oct);
	
	return 0;
}