#include <stdio.h>

int main()
{
  int nota1, nota2, nota3;
  float media;

  printf("Cálculo de Médias\n");

  printf("Digite a primeira nota: ");
  scanf("%d", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%d", &nota2);
  printf("Digite a terceira nota: ");
  scanf("%d", &nota3);

  media = (float) (nota1 + nota2 + nota3) / 3;

  printf("\n--- Resultado ---\n");
  printf("Média: %.2f\n", media);
}