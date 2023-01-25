#include <iostream>

int main(){
    // Uma constante especifica que o valor de uma variavel e constante
    // Uma constante diz ao compilador para previnir que nada o modifique  
    // (Apenas leitura)

    // Se usa uma constante com valores que você não queira modificar
    const double PI = 3.14;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";



    return 0;
}