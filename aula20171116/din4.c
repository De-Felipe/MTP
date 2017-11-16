#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
	int x, y;
}ponto;

typedef struct
{
	int vertice;
	ponto Spontos[10000];
}poligono;

void area(poligono *forma, int vertice)
{
	int i, j, det=0;
	for(i=0; i<vertice-1; i++)
		det+=(((*forma).Spontos[i].x*(*forma).Spontos[i+1].y)-((*forma).Spontos[i+1].x*(*forma).Spontos[i].y));
	det+=(((*forma).Spontos[vertice-1].x*(*forma).Spontos[0].y)-((*forma).Spontos[0].x*(*forma).Spontos[vertice-1].y));
	det/=2;
	printf("\nArea: %d", det);
}

void centroide(poligono *forma, int vertice)
{
	float mediax, mediay;
	int i;
	for(i=0; i<vertice ;i++)
		mediax+=((*forma).Spontos[i].x);
	for(i=0; i<vertice ;i++)
		mediay+=((*forma).Spontos[i].y);
	mediax/=vertice;
	mediay/=vertice;
	printf("\nCentroide: (%g;%g)", mediax, mediay);
}

int main()
{
	int n, i;
	poligono forma;
	printf("Digite a quantidade de vertices: ");
	scanf("%d", &n);
	printf("Digite as coordenadas dos vertices: ");
	for(i=0; i<n; i++)
		scanf("%d%d", &forma.Spontos[i].x, &forma.Spontos[i].y);
	area(&forma, n);
	centroide(&forma, n);
	return 0;
}
