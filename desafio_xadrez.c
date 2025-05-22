// Criando código para movimentações de peças de xadrez.
// Incluindo bibliotecas.
#include <stdio.h>
// Bloco de códigos que declaram os movimentos.
int main() {
  // Declarando o movimento da torre, para direita.
printf("MOVIMENTO DA TORRE: \n");
for (int i = 1; i <= 5; i++) {
  printf("DIREITA\n");

}
printf("\n");
// Declarando o movimento do bispo, uma linha para cima e uma coluna para direita.
printf("MOVIMENTO DO BISPO: \n");
for (int i = 1; i <= 5; i++) {
  printf("CIMA, DIREITA\n");

}
printf("\n");
// Declarando o movimento da rainha, uma coluna para esquerda.
printf("MOVIMENTO DA RAINHA:\n");
int movimentos_rainha = 0;
while (movimentos_rainha < 8) {
  printf("ESQUERDA\n");
  movimentos_rainha++;
}
printf("\n");
// Declarando o movimento do cavalo, duas casas para baixo.
printf("MOVIMENTO DO CAVALO:\n");
for (int i = 0; i < 2; i++) {
  printf("BAIXO\n");
}
// Movimentando uma casa para esquerda.
int j = 0;
while (j < 1) {
  printf("ESQUERDA\n");
  j++;
}
printf("\n");

return 0; //Finalizando o programa.

}
