#include <stdio.h>
#include <stdlib.h>
#include "avl.h"

int main(int argc, char * argv[]) {
	arvore a;
	int opcao;
	int controleFB;
	int controleFBRemocao;
	inicializar(&a);

	while(1) {
		scanf("%d", &opcao);

		switch(opcao) {
				int valor;
				case 1:
						scanf("%d", &valor);
						a = adicionar(valor, a, &controleFB);
						break;
				case 2:
						pre_order(a);
						printf("\n");
						break;
				case 3:
						in_order(a);
						printf("\n");
						break;
				case 4:
						pos_order(a);
						printf("\n");
						break;
				case 9:
						scanf("%d", &valor);
						a = remover(valor, a, &controleFBRemocao);
						break;
				case 10:
						imprimir(a);
						printf("\n");
						break;
				case 99:
						exit(0);
		}
	}
}
