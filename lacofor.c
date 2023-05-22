#include <stdio.h>

int main(void) {
int notaAluno;
int qtdAluno = 5;
float somaNota = 0;
int i;

  for(i = 1; i<=qtdAluno; i++){
   
    printf("Escreva a nota %d \n", i);
    scanf("%d", &notaAluno);
    somaNota = somaNota + notaAluno;
    }
      printf("Média da turma: %f \n", somaNota/qtdAluno);
  return 0;
}
