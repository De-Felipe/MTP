#include<stdio.h>
#define N 9

int trib(int n){
	switch(n){
	case 0:
		return 0;
	case 1:
		return 1;
	case 2:
		return 2;
	default:
		return trib(n-1)+2*trib(n-2)+3*trib(n-3);
	}
}

int main(){
	printf("Trib(%d) = %d\n",N,trib(N));
	return 0;
}
