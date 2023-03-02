#include <iostream>
using namespace std;

int main(){
    // memory address = Um lugar em memoria que os dados sao armazenados
    // Um endereço pode ser acessado usando & (address-of operator) 

    string name = "Lucas";
    int age = 21;
    bool student = true;

    // Mostrando o endereço em memoria da variavel name em Hexadecimal
    
    cout << &name << '\n';
    cout << &age << '\n';
    cout << &student << '\n';



    return 0;
}