#include <iostream>
using namespace std;

//Crie um algoritmo em C++ que calcula a potência de B^e, em que o usuário informa um número real B e um número natural E. Nesse algoritmo, sempre que é informado o resultado da potência, é perguntado ao usuário, se ese deseja calcular outra potência.//

float potencia(float x, int y){
  float pot=1;
  int cont=1;
  while (cont <=y){
    pot*=x;
    cont++; 
  }
  return pot;
}

int main() {
  float b; //base
  int e; //expoente
  while(true){
  cout << "Digite a base: \n";
  cin >> b;
  cout << "Digite o expoente: \n";
  cin >> e;
  float respot=potencia(b,e);
  cout << "O resultado de " << b << " elevado a " << e << " é igual a " << respot << endl;
  int q; 
 cout << "Digite 1 se quiser calcular outra potência e 0 se não quiser \n";
 cin >> q;
 if(q==0){
   break;
 }
  }
 
 return 0;
}