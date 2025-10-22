#include <stdio.h>

int main()
{
 int i = 0, j = 0;

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


  printf("\nMovimentos do Cavalo:\n\n");

  i = 0;

  for (i = 0; i < 1; i++) {
      do {
          printf("baixo\n");
          j++;
      } while (j < 2);

      printf("esquerda\n");
  } 

  return 0;
}