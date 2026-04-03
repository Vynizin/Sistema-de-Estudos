#include <stdio.h>
#include "funcoes.h"

int HorasEstudadas(int horas){
  int temp;
  printf("Quantas horas você estudou?\n");
  scanf("%d",&temp);
  if(temp <= 0){
    printf("Digite uma hora válida!\n");
    temp = 0;
    return 0;
  }else{
    horas =+ temp;
    printf("Adicionado com sucesso!\n");
  }
  return horas;

}