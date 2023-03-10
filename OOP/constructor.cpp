#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int age;
        double gpa;

        // Criando um constructor para assinalar os valores automaticamente 
    Student(string name, int age, double gpa){
        this -> name = name;
        this -> age = age;
        this -> gpa = gpa;        
    }
};


int main(){

    // Constructor = Metodo especial que e automaticamente chamado quando um objeto e instanciado
                  
    // Passando entre parenteses os atributos para o metodo constructor 
    Student student1 ("Lucas", 21, 2.5);
    
    // Mostrando todos os atributos de student1
    cout << student1.name << endl;
    cout << student1.age << endl;
    cout << student1.gpa << endl;

    return 0;
}