#include <iostream>
using namespace std;

int main(){

    // Dynamic Memory = Memoria que e alocada depois do programa ser rodado e compilado
    //                  Se usa o operador new para alocar memoria no HEAP. E util quando nao sabemos 
    //                  o quanto de memoria vamos precisar fazendo nossos programas serem mais flexiveis

    int *pNum = NULL;
    pNum = new int;

    *pNum = 21;

    cout << "Endereco: " << pNum << '\n';

    cout << "Valor: " << *pNum << '\n';
    
    // Usamos delete para liberar memoria 
    delete pNum;




    return 0;
}