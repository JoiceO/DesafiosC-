#include <iostream>
using namespace std;

//Crie um algoritmo em C++ em que o usuário informa os gastos com alimentação de 5 famílias, calcula a média de gastos e diz, de cada família, se seu gasto está abaixo, acima ou na média.

int main() {
  float gastofamilia[5];
  for (int i=0; i<5; i++){
    cout << "Digite os gastos da famíla " << i+1 << endl;
    cin >> gastofamilia[i];
  }
  float media=0;
  for (int i=0; i<5; i++){
    media += gastofamilia[i];
  }
  media /= 5;
  cout << "Média de gastos: " << media << endl;

for (int i=0; i<5; i++){
  if (gastofamilia[i]< media){
    cout << "A família " << i+1 << " tem gastos abaixo da média\n";
  } else if (gastofamilia[i] == media){
    cout << "A família " << i+1 << " tem gastos na média\n";
  }else{
    cout << "A família " << i+1 << " tem gastos acima da média\n";
  }

}

 return 0;
}