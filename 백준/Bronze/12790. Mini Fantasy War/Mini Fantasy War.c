#include <stdio.h>

int main(void)
{
	int t;
	int hp, mp, atk, def, a, b, c, d;
	int x;
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf("%d %d %d %d", &hp, &mp, &atk, &def);
		scanf("%d %d %d %d", &a, &b, &c, &d);
		
		hp += a;
		mp += b;
		atk += c;
		def += d;
		
		if (hp < 1)
		{
			hp = 1;
		}
		if (mp < 1)
		{
			mp = 1;
		}
		if (atk < 0)
		{
			atk = 0;
		}
		
		x = hp + mp * 5 + (atk + def) * 2;
		
		printf("%d\n", x);
	}
	
	return 0;
}