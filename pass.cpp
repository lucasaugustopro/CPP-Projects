#include <iostream>
using namespace std;

// Passando por valor a função nao devolve oque deveria
//void swap (string x , string y)

// Passando por referencia
// Funciona pois passa atraves do & o endereço na memoria das variaveis
void swap(string &x, string &y){
    string temp;
    temp = x;
    x = y;
    y = temp;   
}

int main(){
    
    // Pass by reference VS Pass by value
    // Passando por referencia VS Passando por valor

    string x = "Terra";
    string y = "Agua";

    // Passando as variaveis por valor a função de swap nao funciona,
    // pois ela duplica a variavel dentro da propria função sendo assim passsando por valor,
    // não funciona nesse exemplo.

   // Mas passando por referencia usando & que passa o endereço na memoria a função funciona pois,
   // não duplica as variaveis dentro da função
   
   swap(x,y);


    
    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';

    return 0;
}