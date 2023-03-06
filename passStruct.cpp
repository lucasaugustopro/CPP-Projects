#include <iostream>
using namespace std;

// Criando uma struct e passando suas variaveis
struct Car{
    string model;
    int year;
    string color;
};

void printCar(Car car);

int main(){
    // Passando uma struct como argumento para uma função
    // Criando dois car que herdam de Car
    Car car1;
    Car car2;

    car1.color = "Red";
    car1.model = "Mustang";
    car1.year = 1922;

    car2.color = "Blue";
    car2.model = "Corvette";
    car2.year = 1950;

    // Mostrando os parametros de car1
    printCar(car1);
    
    // Mostrando os parametros de car2
    printCar(car2);
    return 0;
}
// Criando uma função para printar os atributos de Car
// Passando como argumento a struct Car e dando um nome de car em seguida

void printCar(Car car){
    // Printando a cor
    cout << car.color << '\n';
    // Printando a modelo
    cout << car.model << '\n';
    // Printando e o ano
    cout << car.year << '\n';
}