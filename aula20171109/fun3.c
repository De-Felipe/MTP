#include <stdio.h>

int comparar(int n, int m, int *a, int *b)
{
	int i=0,j=0;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(a[i]==b[j])
				printf("%d ", a[i]);
	return 0;
}

int main()
{
	int a[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
	int n=sizeof(a)/sizeof(int);
	int b[]={1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
	int m=sizeof(b)/sizeof(int);
	comparar(n,m,a,b);
	return 0;
}
