#include <iostream>

using namespace std;

// Crie um algoritmo em C++ em que o usuário informa as notas de três provas de um determinado aluno e também a média de nota da turma toda. O algoritmo deve calcular a média deste aluno e informar se sua nota é acima da média, abaixo da média ou está na média. //

int main(){
  float nota1, nota2, nota3, mediaturma;
  cout << "Digite a primeira nota: ";
  cin >> nota1;
  cout << "Digite a segunda nota: ";
  cin >> nota2;
  cout << "Digite a terceira nota: ";
  cin >> nota3;
  cout << "Digite a média da turma: ";
  cin >> mediaturma;

   float mediaaluno=(nota1+nota2+nota3)/3;
   cout << "A média final do aluno é: " << mediaaluno << endl;

   if(mediaaluno < mediaturma){
     cout << "O aluno está abaixo da média";
   } else if (mediaaluno == mediaturma){
     cout << "O aluno está na média";
   } else{
     cout << "O aluno está acima da média";
   }

  return 0;
}