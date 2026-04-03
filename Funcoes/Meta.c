#include <stdio.h>
#include "funcoes.h"

int Meta(int meta){
  printf("Digite qual meta de horas você deseja alcançar?\n");
  scanf("%d",&meta);
  if(meta < 0){
    printf("Defina uma meta válida!\n");
    meta = 0;
    return 0;
  }else{
    printf("Salvo com sucesso!\n");
  }
  return meta;
}