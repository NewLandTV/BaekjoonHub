#include <stdio.h>

int main(void)
{
	int cmd;
	char x, y;
	int n, v[2] = { 0, };
	
	while (1)
	{
		scanf("%d", &cmd);
		
		switch (cmd)
		{
		case 1:
			scanf(" %c %d", &x, &n);
			
			v[(int)x - 65] = n;
			
			break;
		case 2:
			scanf(" %c", &x);
			printf("%d\n", v[((int)x - 65)]);
			
			break;
		case 3:
			scanf(" %c %c", &x, &y);
			
			v[(int)x - 65] += v[(int)y - 65];
			
			break;
		case 4:
			scanf(" %c %c", &x, &y);
			
			v[(int)x - 65] *= v[(int)y - 65];
			
			break;
		case 5:
			scanf(" %c %c", &x, &y);
			
			v[(int)x - 65] -= v[(int)y - 65];
			
			break;
		case 6:
			scanf(" %c %c", &x, &y);
			
			v[(int)x - 65] /= v[(int)y - 65];
			
			break;
		case 7:
			return 0;
		}
	}
	
	return 0;
}