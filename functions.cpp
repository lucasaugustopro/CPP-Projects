#include <iostream>

// Uma função tem que ser definida acima da função main e nunca dentro
// Quando uma função recebe um parametro o tipo deve ser especificado
// Como no caso abaixo que e especificado name como do tipo String
void happyBirthday(std::string name){
    std::cout << "Happy Birthday !! " << name << '\n';
    std::cout << "Happy Birthday !! " << name << '\n';
    std::cout << "Happy Birthday !! " << name << '\n';
    std::cout << "Happy Birthday !! " << name <<'\n';
    std::cout << "Happy Birthday !! " << name << '\n';
    
}



int main(){
    // Functions = Um bloco de código reutilizavel
    std::string name = "Lucas";
    // Chamando a função happyBirthday definida acima
    // Para chamar uma função e necessário o nome da função seguida de parenteses como e mostrado abaixo
    // Passando name como parametro
    happyBirthday(name);
    // Como descrito uma função e reutilizavel ou seja pode ser chamada quantas vezes desejarmos
    happyBirthday(name);

    return 0;
}