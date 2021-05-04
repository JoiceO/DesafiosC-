#include <iostream>
#include "cidadesbrasil.h"

using namespace std;

 
int main() {
  cidadesbrasil saopaulo(1554, 12330000); // ano de fundação da cidade de SP e número da população ref a 2020//
  cout << "Ano de fundação de São Paulo: " << saopaulo.getano() <<endl;
  cout << "População: " << saopaulo.getpopulacao() << endl;

  cidadesbrasil campinas (1774, 1214000);
  campinas.acrescentapopulacao(1);
  cout << "Ano de fundação de Campinas: " << campinas.getano() << endl;
  cout << "População: " << campinas.getpopulacao() << endl;

  return 0;
}