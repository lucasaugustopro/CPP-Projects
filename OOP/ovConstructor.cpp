#include <iostream>
using namespace std;

class Pizza{
    public:
        string topping1;
        string topping2;
    
    // Primeiro constructor
    Pizza(string topping1){
        this -> topping1 = topping1;
    }

    // Segundo constructor adicionando mais um topping2
    Pizza(string topping1, string topping2){
        this -> topping1 = topping1;
        this -> topping2 = topping2;
    }
};
int main(){

    // Overload constructor = São multiplos constructors com o mesmo nome mas com diferentes parametros,
    //                      permite varios argumentos quando instaciamos um objeto.

    Pizza pizza1("Pepperoni");
    Pizza pizza2("Moshums", "Calabresa");
    
    cout << pizza1.topping1 << endl;

    cout << pizza2.topping1 << endl;
    cout << pizza2.topping2 << endl;

    return 0;
}