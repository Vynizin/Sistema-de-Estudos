#include <stdio.h>
#include "funcoes.h"

int main(){
  int escolha;
  while (1)
  {
    printf("Bem vindo ao Sistema de Estudos!\nEscolha qual função deseja usar:\n1-Adicionar Horas estudadas\n2-Ver total de horas\n");
    printf("3-Definir uma meta(Ex: 50h)\n4-Ver quanto falta para a meta\n0-Sair\n");
    scanf("%d",&escolha);
    if(escolha == 0){
      break;
    }

    if(escolha == 1){
      HorasEstudadas();
    }

  }
  
}