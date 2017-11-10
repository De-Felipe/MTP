#include<stdio.h>
#include<string.h>

int main()
{
	int x = (3+2)%9, y = (2+3)%9, z = (7+2)%9;
	char str1[] = "P!hbujoip!LjljNbsjfMpvjtP!mfbpP!npsdfhpP!ujhsfB!"
	"ujhsftbB!mfpbBmfyfj";
	char str2[] = "dbdpvdpnfvgpj!qsftp!qpshptupv!efmbncfvspvcbeftu"
	"spjdpotuspjfybnjob";
	char str3[] = "vnb!bsnbejmib!ef!dpfmipvnb!spvqb!opwbvnb!qpdb!ef!"
	"tbohvfvn!pttpvn!csjorvfepvn!wbnqjspvn!dftup!ef!wjnfvn!"
	"esbhbpvn!cbmef!ef!bsfjb";
	int len1[] = {0, 14, 19, 24, 30, 39, 46, 55, 61, 67};
	int len2[] = {0, 5, 10, 23, 32, 38, 43, 50, 58, 65};
	int len3[] = {0, 23, 37, 55, 62, 74, 84, 100, 109, 126};
	int i;
	char * ptr;
	for(i = len1[x], ptr = str1+i; i < len1[x+1]; i++, ptr++)
		printf("%c", (*ptr) - 1);
	printf(" ");
	for(i = len2[y], ptr = str2+i; i < len2[y+1]; i++, ptr++)
		printf("%c", (*ptr) - 1);
	printf(" ");
	for(i = len3[z], ptr = str3+i; i < len3[z+1]; i++, ptr++)
		printf("%c", (*ptr) - 1);
	printf(".\n");
	return 0;
}
