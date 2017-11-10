#include <stdio.h>

int main()
{
	int x = 3, y = 3, z = 3, v = 3, w = 2;
	int i, prod = 1;
	if(x > 5 && z < 5)
		for(i = 0; i < w; i++)
			prod = prod*y;
	else
		for(i = 0; i < v; i++)
			prod = prod*(y+1);
	y = prod%(v*w);
	x = (v+w)*((x > z)? x - z : z - x);
	while(z < v+w) z = z + 3;
	printf("%d %d %d\n",x,y,z);
	return 0;
}
