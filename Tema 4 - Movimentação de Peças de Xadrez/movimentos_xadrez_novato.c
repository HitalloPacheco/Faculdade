#include <stdio.h>

int main()
{
 int i = 0;

 printf("Movimentos da Torre:\n\n");

  do {
      printf("Direita\n");
      i++;
  } while (i < 5);

  printf("\nMovimentos do Bispo:\n\n");

  i = 0;

  do {
      printf("Cima, Direita\n");
      i++;
  } while (i < 5);

  printf("\nMovimentos da Rainha:\n\n");

  i = 0;

  do {
      printf("Esquerda\n");
      i++;
  } while (i < 8);

  return 0;
}