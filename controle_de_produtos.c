#include <stdio.h>

int main() {
  char produtoA[30] = "Produto A";
  char produtoB[30] = "Produto B";

  unsigned int quantidadeA = 1000;
  unsigned int quantidadeB = 2000;

  float valorA = 10.50;
  float valorB = 20.40;

  unsigned int estoqueMinimoA = 500;
  unsigned int estoqueMinimoB = 2500;

  double valorTotalA;
  double valorTotalB;

  int resultadoA, resultadoB;

  printf("Controle de Produtos\n");
  printf("-------------------\n");
  printf("Produto %s tem estoque %u e valor unitário de R$ %.2f\n", produtoA, quantidadeA, valorA);
  printf("Produto %s tem estoque %u e valor unitário de R$ %.2f\n", produtoB, quantidadeB, valorB);

  resultadoA = quantidadeA > estoqueMinimoA;
  resultadoB = quantidadeB > estoqueMinimoB;

  printf("O produto %s tem estoque mínimo %d", produtoA, resultadoA);
  printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

  valorTotalA = (double) quantidadeA * valorA;
  valorTotalB = (double) quantidadeB * valorB;
  
  printf("O valor total do estoque do produto %s é R$ %.2lf\n", produtoA, valorTotalA);
  printf("O valor total do estoque do produto %s é R$ %.2lf\n", produtoB, valorTotalB);
}