#include <iostream>
#include "cidadesbrasil.h"

using namespace std;

//Função 'cidadesbrasil' e suas funções abaixo://

cidadesbrasil::cidadesbrasil (int a, int p){
  ano = a;
  populacao = p;
}

void cidadesbrasil::setano (int a){
  ano = a;
}

int cidadesbrasil::getano (){
  return ano;
}

void cidadesbrasil::setpopulacao (int p){
  populacao = p;
}

int cidadesbrasil::getpopulacao (){
  return populacao;
}

void cidadesbrasil::acrescentapopulacao (int p){
  populacao+=p;
}