#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int i,j;
	int mat[4][5];
	// Laços para preencher a matriz
	for(i = 0; i < 4; i++){
		for(j = 0; j < 5; j++){
			mat[i][j] = rand()%10;
			if(mat[i][j]%2 != 0){
				j--;
			}
		}
	}
	
	// Laços para escrever a matriz
	for(i = 0; i < 4; i++){
		for(j = 0; j < 5; j++){
			printf("[%d] ",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
