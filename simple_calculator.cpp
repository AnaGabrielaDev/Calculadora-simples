#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    char op;
    float num1, num2;

    /* cout << "Por favor, escolha um operador. \n Para divisao, use / \n Para multiplicacao, use * \n Para somar, use + \n Para subtrair, use - \n";
    cin >> op; */

    cout << "calculadora \n ";
    cin >> fixed >> setprecision (2) >> num1 >> op >> num2;

    switch(op) {
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
        case '*':
        
            cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2; 
        break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
        
    } 



    return 0;
}