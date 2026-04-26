#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, w, h;
	int len;
	
	scanf("%d %d %d", &n, &w, &h);
	
	while (n--)
	{
		scanf("%d", &len);
		
		if (len <= w || len <= h || len <= pow(w * w + h * h, 0.5))
		{
			printf("DA\n");
			
			continue;
		}
		
		printf("NE\n");
	}
	
	return 0;
}