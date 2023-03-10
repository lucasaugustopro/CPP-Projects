#include <iostream>
using namespace std;

class Animal{
    public:
        bool alive = true;
  
    void eat(){
        cout << "This animal is eating !" << endl;
    }
};

// Para uma classe filho herdar de pai e preciso usar : public e em seguida o nome da classe pai
class Dog : public Animal{
    public:
        void bark(){
            cout << "The dog goes woof !" << endl;
        }
};

class Cat : public Animal{
    public:
        void meow(){
            cout << "The cat goes meow!" << endl;
        }
};
int main(){

    // inheritance = Uma classe que recebe atributos e metodos de outra classe
    //              Classe filhas herdam de suas classes pais 
    //              Ajuda a reusar codigos similares sem multiplicar a mesma classe

    Dog dog;
    Cat cat;
    // Mostrando o atributo alive eo metodo eat herdados de Animal
    cout << dog.alive << endl;
    dog.eat();
    dog.bark();

    cat.eat();
    cat.meow();


    return 0;
}