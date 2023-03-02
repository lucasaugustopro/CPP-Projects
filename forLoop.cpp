#include <iostream>

int main(){
    
    // For Loop = Um loop que vai executar um bloco de código,
    //           específicas vezes.
    // For Loop tem tres estados

    // Primeiro estado e chamado index ou i como normalmente e usado
    // for(int index = 1) ou como normalmente e usado for(i = 1)

    // Segundo estado e determinado quantas vezes o loop vai se repetir
    // for(int i = 1; i <= 10) no exemplo o loop irá se repetir ate o numero da index, 
    //                          ou i ser menor ou igual a 10

    // Terceiro estado e chamado incrementar ou decrementar
    // i++ = incrementar 
    // i-- = decrementar
    // Nesse exemplo cada vez que o loop e executado e incrementado 1 ao index ou i.
    // Se repetindo ate o numero da index ou i ser menor ou igual a 10
    // for(int i =1; i <= 10; i++)



    for(int i = 1; i <= 10; i++){
        std::cout << i << '\n';
    }


    return 0;
}