#include <iostream>

int searchArray(int array[],int size, int element);

int main(){
    int numbers[]={1,2,3,4,5,6,7,8,9,};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Digite o elemento que esta procurando: ";
    std::cin >> myNum;

    index = searchArray(numbers,size,myNum);
    
    if(index != -1){
        std::cout << myNum << " Esse e o index " << index;
    }else{
        std::cout << myNum << "Nao esta no Array";
    }



    return 0;
}

int searchArray(int array[],int size, int element){

    for(int i=0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }    

    //-1 significa retornar caso nada tenha sido encontrado
    return -1;
}