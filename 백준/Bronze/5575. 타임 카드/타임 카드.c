#include <stdio.h>

int main(void)
{
	int ah1, am1, as1, ah2, am2, as2;
	int bh1, bm1, bs1, bh2, bm2, bs2;
	int ch1, cm1, cs1, ch2, cm2, cs2;
	int a1, a2, b1, b2, c1, c2;
	int arh, ah, arm, ars;
	int brh, bh, brm, brs;
	int crh, ch, crm, crs;
	
	scanf("%d %d %d %d %d %d", &ah1, &am1, &as1, &ah2, &am2, &as2);
	scanf("%d %d %d %d %d %d", &bh1, &bm1, &bs1, &bh2, &bm2, &bs2);
	scanf("%d %d %d %d %d %d", &ch1, &cm1, &cs1, &ch2, &cm2, &cs2);
	
	a1 = ah1 * 3600 + am1 * 60 + as1;
	a2 = ah2 * 3600 + am2 * 60 + as2;
	b1 = bh1 * 3600 + bm1 * 60 + bs1;
	b2 = bh2 * 3600 + bm2 * 60 + bs2;
	c1 = ch1 * 3600 + cm1 * 60 + cs1;
	c2 = ch2 * 3600 + cm2 * 60 + cs2;
	a2 -= a1;
	b2 -= b1;
	c2 -= c1;
	arh = a2 / 3600;
	ah = a2 % 3600;
	arm = ah / 60;
	ars = ah % 60;
	brh = b2 / 3600;
	bh = b2 % 3600;
	brm = bh / 60;
	brs = bh % 60;
	crh = c2 / 3600;
	ch = c2 % 3600;
	crm = ch / 60;
	crs = ch % 60;
	
	printf("%d %d %d\n", arh, arm, ars);
	printf("%d %d %d\n", brh, brm, brs);
	printf("%d %d %d\n", crh, crm, crs);
	
	return 0;
}