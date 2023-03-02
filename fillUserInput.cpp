#include <iostream>
using namespace std;

int main(){
    
    // Preenchendo um array com dados fornecido pelo usuario

    // Definindo um array de Strings com tamanho de 5 elementos
    string foods[5];
    
    // Guardando o valor do tamanho do array dentro de size
    int size = sizeof(foods)/sizeof(foods[0]);
    string temp;

    // Usando loop para o usuario preencher o array com comidas que goste
    for(int i=0; i < size; i++){
        cout << "Digite uma comida que voce goste ou aperte s para sair # " << i + 1<< ": ";
        getline(cin,temp);
        if(temp == "s"){
            break;
        }else{
            foods[i] = temp;
        }
    }
    // Mostrando para o usuario todas as comidas que ele digitou em ordem
    cout << "Voce gosta da comida:\n";
    for(string food : foods){
        cout<< food << '\n';
    }

    return 0;
}