#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

int main(){
	int mat[100][100], linhas, cols, x, cont=0, i, j;
	printf("Dimensao da matriz:");
	scanf("%d%d",&linhas,&cols);
	geraMatriz(mat,linhas,cols);
	mostraMatriz(mat,linhas,cols);
	printf("Valor de X:");
	scanf("%d",&x);
	// percorrer para contar x na matriz
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		    if(x == mat[i][j])
		       cont++;
	// ao terminar de percorrer a matriz, mostrar cont
	printf("O valor %d existe %d vez(es) na matriz",x,cont);
	return 0;
}
