#include <iostream>

int main(){

    // switch = Uma alternativa para que não seja necessário usar muitos else if,
    //          compara um valor com os diversos cases.

    int month;
    std::cout << "Digite um mes(1-12): ";
    std::cin >> month;
    
    switch (month)
    {
     case 1:
        std::cout << "Esse eo mes de Janeiro ";
        break;
     case 2:
        std::cout << "Esse eo mes de Fevereiro ";
        break;
     case 3:
        std::cout << "Esse eo mes de Março ";
        break;
     case 4:
        std::cout << "Esse eo mes de Abril";
        break;
     case 5:
        std::cout << "Esse eo mes de Maio";
        break;
     case 6:
        std::cout << "Esse eo mes de Junho";
        break;
     case 7:
        std::cout << "Esse eo mes de Julho";
        break;
     case 8:
        std::cout << "Esse eo mes de Agosto";
        break;
     case 9:
        std::cout << "Esse eo mes de Setembro ";
        break;
     case 10:
        std::cout << "Esse eo mes de Outubro";
        break;
     case 11:
        std::cout << "Esse eo mes de Novembro";
        break;
     case 12:
        std::cout << "Esse eo mes de Dezembro";
        break;
        // default funciona como um else se todos os casos acima forem falsos 
        // executa oque está no default
     default:
        std::cout << "Por favor so escreva numeros de 1 a 12";
        break;
    }
    
    
    
    return 0;
}