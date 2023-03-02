#include <iostream>

void sort (int array[], int size);
    
int main(){
    
    // Organizando um Array com Bubble Sort
    // Criando um array de numeros inteiros desordenados
    int array[] = {10,2,1,3,4,6,5,7,8,9};

    // Armazenado em size o tamanho do array
    int size = sizeof(array)/sizeof(array[0]);
    
    //Chamando a função sort
    sort(array, size);

    for(int element : array){
        std::cout << element << " ";
    }
    
    return 0;
}

void sort (int array[], int size){
    int temp;
    for(int i =0; i < size -1; i++){
        for(int j =0; j < size - i - 1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }   
    }



}