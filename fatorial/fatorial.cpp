#include <iostream>

using namespace std;

int main()
{

    int num;
    int result = 1;

    cout << "Escolha um numero: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        result = result * i;
    }

    cout << "O fatorial de  " << num << " e " << result;

    return 0;
}