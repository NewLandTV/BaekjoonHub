#include <stdio.h>

int main(void)
{
	int h, m;
	
	scanf("%d %d", &h, &m);
	
	switch (h)
	{
	case 7:
	case 8:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
		printf("Yes");
		
		break;
	case 6:
		printf("%s", m >= 30 ? "Yes" : "No");
		
		break;
	case 9:
		printf("%s", m == 0 || m >= 50 ? "Yes" : "No");
		
		break;
	case 10:
		printf("%s", m == 0 || m >= 50 ? "Yes" : "No");
		
		break;
	case 11:
		printf("%s", m == 0 || m >= 50 ? "Yes" : "No");
		
		break;
	case 12:
		printf("%s", m == 0 || m >= 50 ? "Yes" : "No");
		
		break;
	case 13:
		printf("%s", m <= 50 ? "Yes" : "No");
		
		break;
	case 14:
		printf("%s", m >= 40 && m <= 50 ? "Yes" : "No");
		
		break;
	case 15:
		printf("%s", m >= 40 && m <= 50 ? "Yes" : "No");
		
		break;
	case 16:
		printf("%s", m >= 40 ? "Yes" : "No");
		
		break;
	case 22:
		printf("%s", m <= 50 ? "Yes" : "No");
		
		break;
	default:
		printf("No");
		
		break;
	}
	
	return 0;
}