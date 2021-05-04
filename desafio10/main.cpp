#include <iostream>
using namespace std;

// Crie um algoritmo em C++ que tenha uma função que recebe dois ponteiros e troca o valor de referência entre os dois.//

void troca(int* &ponteiro1, int* &ponteiro2){
  int temporaria;
  temporaria = *ponteiro1;
  *ponteiro1 = *ponteiro2;
  *ponteiro2 = temporaria;
}

int main() {
  int *ponteiro1 = new int;
  *ponteiro1 = 5;
  int *ponteiro2 = new int;
  *ponteiro2 = 7;

  cout << "Ponteiro 1: " << ponteiro1 << " e " << *ponteiro1 << endl;
  cout << "Ponteiro 2: " << ponteiro2 << " e " << *ponteiro2 << endl;
 
troca(ponteiro1, ponteiro2);

 cout << "Ponteiro 1: " << ponteiro1 << " e " << *ponteiro1 << endl;
  cout << "Ponteiro 2: " << ponteiro2 << " e " << *ponteiro2 << endl;

//Na execução vemos que os ponteiros continuam apontando para os mesmos endereços de memória, só trocam os valores, que são '5' e '7'//

 return 0;
}