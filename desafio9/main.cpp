#include <iostream>
using namespace std;

//Crie um algoritmo em C++ utilizando apenas ponteiros, em que o usuário informa a idade de duas pessoas e o algoritmo informa a média destas duas idades.//

int main() {
  int *idade1 = new int;
  int *idade2 = new int;
  cout << "Qual é a idade da primeira pessoa?\n";
  cin >> *idade1;
  cout << "Qual é a idade da segunda pessoa?\n";
  cin >> *idade2;

  float *media = new float;
  *media = (*idade1 + *idade2)/2;
  cout << "A média das idades é: " << *media << endl;
  
  return 0;
}