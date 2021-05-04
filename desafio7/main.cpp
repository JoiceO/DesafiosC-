#include <iostream>
using namespace std;

// Crie um algoritmo em C++ em que o usuário informa a dimensão de uma matriz, e os elementos de duas matrizes (ambas com a mesma dimensão) e o algoritmo mostra a soma entre estas duas matrizes.//


int main() {
  int l, c;
  cout << "Qual é a quantidade de linhas?\n";
  cin >> l;
  cout << "Qual é a quantidade de colunas?\n";
  cin >> c;

  float matriz1[l][c], matriz2[l][c];
  cout << "Digite abaixo os elementos da matriz 1:\n";
    for (int i=0; i<l; i++){
    for (int j=0; j<c; j++){
      cout << "Digite o elemento da linha " << i+1 << " coluna " << j+1 << endl;
       cin >> matriz1[i][j];
    }
  } 

  cout << "Digite abaixo os elementos da matriz 2:\n";
  for (int i=0; i<l; i++){
    for (int j=0; j<c ;j++){
      cout << "Digite o elemento da linha " << i+1 << " coluna " << j+1 << endl;
       cin >> matriz2[i][j];
    }
  }

  float matrizsoma[l][c];
 for (int i=0; i<l; i++){
   for (int j=0; j<c; j++){
     matrizsoma[i][j] = matriz1[i][j] + matriz2[i][j];
     }
 }
 cout << "A soma entre as 2 matrizes é: \n";

for (int i=0; i<l; i++){
  for (int j=0; j<c; j++){
    cout << matrizsoma[i][j] << " ";
  }
  cout << endl;
}
 return 0;
}