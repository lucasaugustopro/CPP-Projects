#include <iostream>

int main(){
   // Loops dentro de Loops

   for(int i = 1; i <= 3; i++){
      //Convenção para um Loop que fica dentro do outro,
      // substitui a letra i pela j para o loop que fica dentro
      for(int j = 1; j <= 10; j++){
         std::cout << j << ' ';
      }
      std::cout << '\n';
   }  
   
   
   return 0;
}