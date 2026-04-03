#include <stdio.h>
#include "funcoes.h"

int TempoMeta(int meta, int horas){
  int restante = meta - horas;
  if(meta == 0){
    printf("Defina uma meta primeiro!\n");
  }else if(restante <= 0){
    printf("Parabéns, Você atingiu sua meta, merece aplausos!\n");
  }else if(restante > 0){
    printf("Ainda falta %dH(s)!\n",restante);
  }
}