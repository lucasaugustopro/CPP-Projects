#include <iostream>
using namespace std;


int main(){
   // Pointers = Uma variavel que armazena um endereço de memoria de uma outra variavel,
   //           Pointers são usados as vezes como forma mais fácil para trabalhar com endereços
   // & address-of 
   // * deference 
   
   // Criando uma variavel name
   string name = "Lucas";

   //Criando um Pointer para a variavel name contendo seu endereço na memoria 
   string *pName = &name;
   
   cout << pName << '\n';

   // Operador deference e usado para acessar oque esta dentro do endereço armazenado no Pointer  
   cout << *pName;
    return 0;
}