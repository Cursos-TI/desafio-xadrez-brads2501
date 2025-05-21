#include <stdio.h>

int main() {
printf("MOVIMENTO DA TORRE: \n");
for (int i = 1; i <= 5; i++) {
  printf("DIREITA\n");

}
printf("\n");

printf("MOVIMENTO DO BISPO: \n");
for (int i = 1; i <= 5; i++) {
  printf("CIMA, DIREITA\n");

}
printf("\n");

printf("MOVIMENTO DA RAINHA:\n");
int movimentos_rainha = 0;
while (movimentos_rainha < 8) {
  printf("ESQUERDA\n");
  movimentos_rainha++;
}
printf("\n");

return 0;

}
