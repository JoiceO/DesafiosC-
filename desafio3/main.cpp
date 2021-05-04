#include <iostream>
using namespace std;

//Crie um algoritmo em C++ que tenha uma função que calcula o fatorial de um número inteiro positivo informado pelo usuário.//

int fat(int x){
  int fatorial=1;
  for (int i=1; i<+x; i++){
    fatorial*=i;
  } 
  return fatorial;
 } 
 //Acima, o valor i começa em 1, aumenta de 1 em 1 enquanto i for menor ou igual a  x//

int main() {
  int n;
  while (true){
  cout << "Informe um número inteiro positivo: \n";
  cin >> n;
  if (n<=0){
    cout << "O número informado é negativo.\n";
  }else{
    break;
  }
  }

  int valorfat = fat(n);
  cout << "O valor do fatorial de " << n << " é: " << valorfat <<endl;
return 0;
}