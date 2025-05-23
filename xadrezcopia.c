#include <stdio.h>

void moverTorreRecursivo(int linha_atual, int coluna_atual, int delta_linha, int delta_coluna, int tamanho_tabuleiro){
  int proxima_linha = linha_atual + delta_linha;
  int proxima_coluna = coluna_atual + delta_coluna;

  if (proxima_linha >= 0 && proxima_linha < tamanho_tabuleiro && 
  proxima_coluna >= 0 && proxima_coluna < tamanho_tabuleiro) {
  
    printf ("Torre move para: Linha %d, Coluna %d (", proxima_linha, proxima_coluna);
  if (delta_linha == -1) printf("Cima");
  else if (delta_linha == 1) printf("Baixo");
if (delta_coluna == -1) printf("Esquerda");
else if (delta_coluna == 1) printf("Direita");
printf("\n");

moverTorreRecursivo(proxima_linha, proxima_coluna, delta_linha, delta_coluna, tamanho_tabuleiro);
  }

}
  int main () {
    int tamanho = 8;
    int linha_inicial = 3;
    int coluna_inicial = 3;
    
    printf("--- Movimento da Torre (Recursivo)---\n");

    moverTorreRecursivo(linha_inicial, coluna_inicial, -1, 0, tamanho);
    moverTorreRecursivo(linha_inicial, coluna_inicial, 1, 0, tamanho);
    moverTorreRecursivo(linha_inicial, coluna_inicial, 0, -1, tamanho);
    moverTorreRecursivo(linha_inicial, coluna_inicial, 0, 1, tamanho);

    printf("--- FIM DO MOVIMENTO DA TORRE ---\n");

  return 0;
  
  }
