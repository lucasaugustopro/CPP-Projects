#include <iostream>
using namespace std;

int main(){
    // Null value = Um valor especial que significa que algo não tem valor,
    //              Quando um pointer esta segurando um valor null esse pointer não aponta para nada.

    // nullptr = palavra-chave que representa um pointer com valor null
    //          normalmente usado para checar se um pointer possui valor ou nao

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        cout << "Endereco nao foi assinado";
    }else{
        cout << "Endereco assinado com sucesso" << '\n';
        cout << *pointer;
    }




    return 0;
}