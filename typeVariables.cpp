#include <iostream>

int main(){
    
    // Int (aceita apenas números inteiros)
    int age = 21;
    int year = 2022;
    int days = 7.5;

    // Double (aceita números decimais)
    double price = 10.9;
    double goa = 2.5;

    // Single character (Suporta apenas um único caracter)
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    // Booleans (Verdadeiro ou Falso)
    bool student = false;
    bool power = true;

    // String (São objetos que representam uma sequencia de textos)
    std::string name = "Lucas";

    // Imprimindo oque esta na variavel name 
    std::cout << name;    
    // Imprimindo uma saudação Hello e depois imprimindo oque esta na variavek name
    std::cout << "Hello " << name;
    // Só vai imprimir o 7 e ignorar o 5 na variavel days pois int nao aceita números decimais 
    std::cout << days;
    // Imprimindo a variavel price que possui um número decimal
    std::cout << price;
    // Imprimindo a variavel initial
    std::cout << initial;

    return 0;
}