#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  float *notas;
  float media;
  float notasT;

printf("quantos alunos tem em sua turma?\n");
scanf("%d",&n);

notas=malloc(n*sizeof(float));

for(int i=0; i<n; i++){
  printf("notas %d:\t", i);
  scanf("%f", &notas[i]);
  notasT=(notas[i]+notasT);

}
media= notasT/n;
printf("a media aritmetica e %.2f:", media);

  return 0;
  free(notas);

}