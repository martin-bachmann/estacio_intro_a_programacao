#include <stdio.h>

int main()
{
  int idade, matricula;
  float altura;
  char nome[50];

  printf("Digite sua idade: ");
  scanf("%d", &idade);
  printf("Digite sua altura: ");
  scanf("%f", &altura);
  printf("Digite o seu nome: ");
  scanf("%s", &nome);
  printf("Digite sua matrícula: ");
  scanf("%d", &matricula);
  
  printf("\n--- Dados do Aluno ---\n");
  printf("Nome: %s\n", nome);
  printf("Idade: %d anos\n", idade);
  printf("Altura: %.2f metros\n", altura);
  printf("Matrícula: %d\n", matricula);
  return 0;
}