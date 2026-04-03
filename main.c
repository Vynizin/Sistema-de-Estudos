#include <stdio.h>
#include ".\Funcoes\funcoes.h"
int escolha,horas=0,meta=0;

int main(){
  while (1)
  {
    printf("Bem vindo ao Sistema de Estudos!\nEscolha qual função deseja usar:\n1-Adicionar Horas estudadas\n2-Ver total de horas\n");
    printf("3-Definir uma meta(Ex: 50h)\n4-Ver quanto falta para a meta\n0-Sair\n");
    scanf("%d",&escolha);
    if(escolha == 0){
      printf("Até logo!");
      break;
    }else if(escolha == 1){
      horas =+ HorasEstudadas(horas);
    }else if(escolha == 2){
      TotalHoras(horas);
    }else if(escolha == 3){
      meta = Meta(meta);
    }else if(escolha == 4){
      TempoMeta(meta,horas);
    }else{
      printf("Erro!\n");
    }

  }
  
}