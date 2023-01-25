#include <iostream>

int main (){
    // Type conversion = converter um valor de um tipo de dado para outro.
    // Implicito = automatico
    // Explicito = Precede o valor com um novo tipo de dado

    // Implicitamente dando um tipo de dado no caso int
    int correct = 8;
    int questions = 10;
    // Explicitamente dando o valor double para questions com parenteses
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    return 0;
}