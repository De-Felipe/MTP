#include <stdio.h>

int main()
{
	int x = 2, y = 3, z = 7;
	int i;
	if(x > 5)
		y = y + z;
	else
		z = z - y;
	for(i = 0; i < y+z; i++)
		x = x + 2;
	printf("%d %d %d\n",x,y,z);
	return 0;
}
