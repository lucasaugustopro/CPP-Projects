#include <iostream>

int main(){

    std::string students[] = {"Bob Esponja","Patrick","Lula Molusco","Sandy"};
    
    // Imprimindo todos os elementos de um array usando um loop
    
    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }


    return 0;
}