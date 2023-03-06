#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Função para adicionar Dados 
void addData() {
    ofstream file("data.txt", ios::app); 
    if (file.is_open()) {
        string name, email;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter email: ";
        cin >> email;
        file << name << "," << email << endl; 
        file.close();
        cout << "Data added successfully!" << endl;
    }
    else {
        cout << "Error opening file." << endl;
    }
}

// Função para mostrar os dados
void displayData() {
    ifstream file("data.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl; 
        }
        file.close(); 
    }
    else {
        cout << "Error opening file." << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "File Handling System" << endl;
        cout << "1. Add Data" << endl;
        cout << "2. Display Data" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            addData();
            break;
        case 2:
            displayData();
            break;
        case 3:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
    } while (choice != 3);
    return 0;
}