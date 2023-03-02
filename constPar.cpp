#include <iostream>
using namespace std;

// Passando os parametros name e age como constantes sendo assim nao e possivel mudar 

void printInfo(const string name, const int age){
    
    cout << name << '\n';
    cout << age << '\n';
}

int main(){
    // const parameter = parameter são efetivos read-only
    //                  código mais seguro e util para referencias e ponteiros
    string name = "Lucas";
    int age = 21;

    printInfo(name,age);

    return 0;
}