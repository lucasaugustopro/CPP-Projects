#include <iostream>
using namespace std;

class Stove{
    // Um atributo sendo publico pode ser reasinado a qualquer momento
    //public:

    // Sendo privado nao pode ser reasinado 
    private:
        int temperature = 0;
    public:
        // Criando uma função getter para ser possivel ler temperature
        int getTemperature(){
            return temperature;
        }

        // Criando uma função setter para ser possivel escrever em temperature
        void setTemperature(int temperature){
            this -> temperature = temperature;
        }
};

int main(){
    
    // Abstraction = Esconde dados desnecessarios para fora da classe
    // getter = função que faz um atributo privado ser LIDO
    // setter = função que faz um atributo privado ser ESCRITO

    Stove stove;
    stove.setTemperature(222);
    // Reescrevendo temperature para ter o valor de 10000
    // stove.temperature = 10000;

    cout << "The temperature setting is: " << stove.getTemperature();


    return 0;
}