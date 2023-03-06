#include <iostream>

// Uma simples calculadora


int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "**********************CALCULADORA************************\n";
    
    std::cout << "Digite qual operacao deseja fazer (+ - / *)";
    std::cin >> op;
    
    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    switch (op)
    {
     case '+' :
        result = num1 + num2;
        std::cout << "O resultado e " << result << '\n';
        break;
     case '-' :
        result = num1 - num2;
        std::cout << "O resultado e " << result << '\n';
        break;   
     case '*' :
        result = num1 * num2;
        std::cout << "O resultado e " << result << '\n';
        break;
     case '/' :
        result = num1 / num2;
        std::cout << "O resultado e " << result << '\n';
        break;
    default:
        std::cout << "Nao foi uma resposta valida" << '\n';
        break;
    }

    
    std::cout << "*********************************************************";
    



    return 0;
}