#include <stdio.h>
#include <stdlib.h>
#include "arquivo.h"

int main(int argc, char * argv[]) {
	tabela tab;
	int opcao;
	inicializarTabela(&tab);

	while(1) {
		scanf("%d", &opcao);
		switch(opcao) {
				int valor;
					case 1:
						printf("%d\n", altura(tab.indices));
						break;
					case 2:
							inserirLivro(&tab, ler_dados());
							break;
					case 3:
							//printf("%d\n", maior_elemento(tab.indices));
							break;
					case 4:
							//printf("%d\n", menor_elemento(tab.indices));
							break;
					case 5:
							pre_order(tab.indices, &tab);
							break;
					case 6:
							in_order(tab.indices, &tab);
							break;
					case 7:
							pos_order(tab.indices, &tab);
							break;

					case 8:
						printf("Código do Livro:\n");
						scanf("%d",&valor);
						buscarLivro(valor, tab.indices, &tab);
						break;

					case 99:
							finalizar(&tab);
							exit(0);

		}
	}
}
