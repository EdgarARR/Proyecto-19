#include <stdio.h>

int main() {

int i, j, f, c, s, ss;
int datos[20][20], ver[200], hor[200];

printf("Dame el numero de filas de la matriz: ");
scanf("%d", &f);

printf ("Dame el numero de columnas de la matriz: ");
scanf("%d", &c);

printf("\n\n");

for (i=0;i<f;i++){
	for (j=0;j<c;j++){
	printf("Dame el dato de la posicion %d, %d: ", i, j);
	scanf("%d", &datos[i][j]);

	}
}

printf("\n");

for (i =0; i<f; i++){
	for (j=0; j<c; j++){
	printf(" %d", datos[i][j]);
	}
printf("\n");
}
printf("\n");


for (i=0;i<f;i++){
	s=0;
	for(j=0;j<c;j++){
		s+=datos[i][j];
	}
	ver[i]=s;
}


for (i=0;i<f;i++){
	printf("La suma de la fila numero %d es de: %d", i, ver[i]);
	printf("\n");
}

printf("\n\n");

for (j=0;j<c;j++){
	s=0;
	for(i=0;i<f;i++){
		s+=datos[i][j];
	}
	hor[j]=s;
}


for (i=0;i<c;i++){
	printf("La suma de la columna numero %d es de: %d", i, hor[i]);
	printf("\n");
}

return 0;
}
