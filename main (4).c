#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *idade;
  //int p;
  int n;
  int maiordeidade=0;
  int menordeidade;
//idade=&p;

  printf("quantas pessoas voce deseja cadastrar?\n");
  scanf("%d", &n);
  idade = malloc(n*sizeof(int));
  
  for(int i=0; i<n; i++){
    printf ( " \n idade %d : " , i+1);
      scanf ( "%d" , &idade[i]);
      if(idade[i] >= 18){
      maiordeidade++;  
      }
    else  {
    menordeidade++;
    }

  }
       printf("a quantidade de alunos maior de idade e:%d\n", maiordeidade );
       printf("a quantidade de alunos menor de idade e:%d\n", menordeidade );





  






  return 0;
}