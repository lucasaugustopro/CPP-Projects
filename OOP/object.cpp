#include <iostream>
using namespace std;

class Human{
    public:
 
    // Atributos = caracteristicas
        string name;
        string occupation;
        int age;
 
    // Metodos = ações
        void eat( ){
            cout << "This person is eating." << endl;
        }
        void drink(){
            cout << "This person is drinking." << endl;
        }
        void sleep(){
            cout << "This person is sleeping." << endl;
        }
};

int main(){
    
    // Object = Um objeto e uma coleção de atributos e metodos
    //          Atributos sao caracteristicas e ações sao metodos

    // Criando um objeto e assinalando seus atributos
    Human human1;
    human1.name = "Lucas";
    human1.age = 21;
    human1.occupation = "Programmer";
    
    // Mostrando cada um dos atributos
    cout << human1.name << endl;
    
    cout << human1.age << endl;
    
    cout << human1.occupation << endl;

    // Executando seus metodos herdados da classe Human
    human1.eat();
    human1.drink();
    human1.sleep();


    return 0;
}