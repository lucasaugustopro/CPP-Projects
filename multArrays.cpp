#include <iostream>
using namespace std;


int main(){

    // 2d Arrays 
    
    string cars[][3] = {{"Mustang","Escape","F-150"},
                       {"Corvette", "Equinox", "Silverado"},
                       {"Challenger", "Durango", "Ram 1500"}};

    // Mostrando o primeiro Array
    cout << cars [0][0] << " ";
    cout << cars [0][1] << " ";
    cout << cars [0][2] << " " << '\n';

    // Mostrando o segundo Array
    cout << cars [1][0] << " ";
    cout << cars [1][1] << " ";
    cout << cars [1][2] << " " << '\n';

    // Mostrando o terceiro Array
    cout << cars [2][0] << " ";
    cout << cars [2][1] << " ";
    cout << cars [2][2] << " " << '\n';
    

    return 0;
}