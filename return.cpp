#include <iostream>

// A função retorna um valor double então devemos definir no começo como double,
// e não como void como os exemplos anteriores
double square (double length){
    double result = length * length;
    
    // Aqui retornamos o valor que esta em result sendo um double
    return result;
}



int main(){

    // Return = retorna o valor ao lugar do qual ela foi chamado 
    
    // Um return e normalmente chamado ao final de uma função,
    // como na função main que possui o return 0

    double length = 5.0;



    return 0;
}