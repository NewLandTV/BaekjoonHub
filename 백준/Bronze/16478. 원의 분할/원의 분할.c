#include <stdio.h>

int main(void)
{
	int pab, pbc, pcd;
	float pda;
	
	scanf("%d %d %d", &pab, &pbc, &pcd);
	
	pda = (float)pab * pcd / pbc;
	
	printf("%.6f", pda);
	
	return 0;
}