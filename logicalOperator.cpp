#include <iostream>

int main(){
    
    // Operador Logico AND , && = checa se duas condições são verdadeiras
    // Operador Logico OR, || = checa se uma das condição e verdadeira     
    // Operador Logico NOT, ! = Reverte o estado logico ou seja transforma um true em false e vice-versa

    int temp;
    bool sunny = false;

    std::cout << "Digite a temperatura: ";
    std::cin >> temp;

    // So executa caso as duas condições sejam verdadeiras
    //if(temp > 0 && temp < 30)
    
    // Executa se uma das condições forem verdadeiras
    if(temp <= 0 || temp >= 30){
         std::cout << "A temperatura esta ruim!\n";
    }
    else{
        std::cout << "A temperatura esta boa!\n";
    }

    // Abaixo o Operador NOT pega a variavel sunny que e false em true
    if(!sunny){
        std::cout << " Esta um dia nublado! ";
    }else{
        std::cout << " Esta um dia ensolarado! ";
    }




    return 0;
}