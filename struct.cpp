#include <iostream>
using namespace std;

// Criando um struct chamada Student e dando variaveis para ela 
struct student{
    string name;
    double gpa;
    bool enrolled;
};
int main(){
    
    // struct = Um grupo de variaveis com um unico nome 
    // A ideia de usar uma struct é permitir que possamos armazenar varios diferentes tipos de dados
    // Podemos acessar as variaveis com . "Class Member Operator"

    // Criando um estudante com student1 e setando as variaveis que ele herdou de student
    student student1;
    student1.name = "Lucas";
    student1.gpa = 3;
    student1.enrolled = true;

    cout << student1.name << '\n';
    

    cout << student1.gpa << '\n';
    

    cout << student1.enrolled << '\n';
    return 0;
}