#include <iostream>
#include <cmath>


int main(){
    
    //double x = 3.14;
    double x = 3.99;
    double y = 4;
    double z;

    // Função max que compara dois numeros e guarda o maior entre eles
    //z = std::max(x,y);

    //Função min que compara dois numeros e guarda o menor entre eles
    //z = std::min(x,y);

    //Função pow onde a base e elevado ao expoente
    //Aqui abaixo sendo 2 elevado a 3
    //z = pow(2,3); 

    // Função sqrt calcula a raiz quadrada
    // z = sqrt(9);   
    
    //Função que mostra o valor absoluto de um numero negativo
    //z = abs(-3);
    
    //Função que arredonda um numero quebrado 
    // Nesse caso arredonda 3.14 para 3
    //z = round(x);

    //Função que sempre arredonda para cima
    // Nesse caso arredonda 3.14 para 4
    //z = ceil(x);

    //Função que sempre arredonda para baixo
    //Nesse caso arredonda de 3.99 para 3
    z = floor(x);
    std::cout << z;
    
    
    
    
    return 0;
}