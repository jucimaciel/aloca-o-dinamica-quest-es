#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *vetor;
  int n;

  printf("qual sera o tomanho do seu vetor?\n");
  scanf("%d", &n);

  int fvetor(int *vetor, int n);
  fvetor(vetor, n);


printf("qual os valores desse vetor:\n");

for (int i=0; i<n; i++){
printf("o valor do vetor e %d:\n", i);
scanf("%d", &vetor[i]);
}

    void imprima(int *vetor, int n);
      imprima(vetor, n);

    void liberar(int *vetor);
       liberar(vetor);

      printf("\nOs valores do vetor depois de liberar.\n");
  for(int i=0;i<n;i++){
      printf("Vetor [%d]: %d\n", i,vetor[i]);

  }
}

int fvetor(int *vetor, int n){
    vetor =(int *) malloc(n * sizeof(int));
      return *vetor;
  
}
void imprima(int *vetor, int n){
      printf("Os novos valores do vetor ficou da assim:.\n");
          for(int i=0;i<n;i++){

        printf("Vetor [%d]: %d\n", i,vetor[i]);
  }
}
void liberar(int *vetor){
        free(vetor);
}








