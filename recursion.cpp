#include <iostream>
using namespace std;

void walk(int steps){
  
   /* 
   for(int i = 0; i < steps; i++){
        cout << "Voce deu um passo !" << '\n'; 
    }
   */
  
  // Usando recursion chamando a função walk dentro dela mesma
  // e tornando o codigo mais facil de entender

  if(steps > 0){
    cout << "Voce deu um passo !" << '\n';
    walk(steps -1);
  }

}

int main(){

    // Recursion = Uma tecnica de programação que uma função invoca ela mesma
    // (iterative VS recursive)
    // Vantagens = Menos codigo e mais limpo, util para algoritimos de procura e ordenação
    // Desvantagens = Usa mais memoria e deixa o programa mais lento

    walk(100);




    return 0;
}