#include <iostream>

int main(){
    // sizyof() = Determina o tamanho em bytes de uma:
    //          varivel,tipos de dados, classes, objetos ...etc 
    
    // Uma String sempre vai ter o tamanho de 32 bytes pois, 
    // e o tamanho do endereço que e reservado
    
    std::string name = "Lucas";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    
    char grades[] = {'A','B','C','D'};

    std::cout << sizeof(gpa) << " bytes" << '\n';
    
    std::cout << sizeof(name) << " bytes" << '\n';

    std::cout << sizeof(grade) << " bytes" << '\n';

    std::cout << sizeof(student) << " bytes" << '\n';

    std::cout << sizeof(grades) << " bytes" << '\n';

    return 0;
}