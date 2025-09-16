#include <stdio.h>

int main(void)
{
	int i, w, h, v;
	
	while (1)
	{
		scanf("%d %d %d %d", &i, &w, &h, &v);
		
		if (i == 0 && w == 0 && h == 0 && v == 0)
		{
			break;
		}
		
		if (i == 0)
		{
			i = v / w / h;
		}
		else if (w == 0)
		{
			w = v / i / h;
		}
		else if (h == 0)
		{
			h = v / i / w;
		}
		else
		{
			v = i * w * h;
		}
		
		printf("%d %d %d %d\n", i, w, h, v);
	}
	
	return 0;
}