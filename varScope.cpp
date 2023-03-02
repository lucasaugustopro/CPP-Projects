#include <iostream>

// Mas usando uma variavel global fora do escopo das fuções todos tem acesso
int myNum = 3;
void printNum();

int main()
{
    // Local Variables - Variaveis locais = declarada dentro de um função ou bloco {}
    //  Global Variables - Variaveis Globais = declarada fora de todas as funções

    //int myNum = 1;

    // Nesse exemplo não vai funcionar pois a variavel num está dentro de outra função no caso a main
    // Sendo assim a função printNum não consegue acessar o valor myNum dentro da função main
    // Porque e uma variavel local e restrita ao escopa da main 
    printNum();
    return 0;
}

void printNum(){
    // Usando assim funciona pois a variavel myNum com o valor 2 esta no escopo da função printNum
    // Mas as duas apesar de ter o mesmo nome não são a mesma variavel

    //int myNum = 2;
    std::cout << myNum;
}