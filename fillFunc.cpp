#include <iostream>
using namespace std;

int main(){

    // fills() = Função fills preenche um alcance de elementos com valores especificos
    // fill(begin,end,value)
    // fill(começo, fim, valor)

    // Definindo um valor como tamanho do array
    const int SIZE = 100;

    //Criando um array de Strings foods
    std::string foods[SIZE];
    
    // begin = foods nome do array
    // end = foods + SIZE nome do array mais o tamanho de definimos
    // value = "pizza" sendo pizza o valor do qual queremos inserir
    // Inserimos o valor pizza 100 vezes sendo assim nao precisamos manualmente,
    // inserir 100 valores direto no array
    
    fill(foods, foods+ SIZE, "pizza");

    for(std::string food : foods){
        std::cout << food << '\n'; 
    }


    return 0;
}