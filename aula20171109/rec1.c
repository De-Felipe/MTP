#include <stdio.h>

int soma(int *a, int *n)
{
    if(*n)
	{
        (*n)--;
        return *a+soma(a+1,n);
    }
    else
        return 0;
}

int main()
{
    int a[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int n=sizeof(a)/sizeof(int);
    printf("A somatoria e %d", soma(a,&n));
    return 0;
}
