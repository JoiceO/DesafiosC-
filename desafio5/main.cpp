#include <iostream>
using namespace std;

// Em um programa de Moradia Popula, somente pessoas maiores de 21 anos e com renda abaixo de R$1200,00 podem participar. Crie um algoritmo em C++ que o usuário informa sua idade e sua renda, e é informado se ele pode ou não participar desse programa.//

int main() {
 float renda;
 int idade;
 cout << "Qual é a sua idade? \n";
 cin >> idade;
 cout << "Qual é a sua renda? \n";
 cin >> renda;

 if (idade >=21 && renda < 1200){ //&& é o mesmo que E
   cout << "Você está apto a participar deste programa \n";
    } else{
      cout << "Você não pode participar do programa. \n";
    }
 
 return 0;
}