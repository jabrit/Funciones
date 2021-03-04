#include <iostream>

using namespace std;

int Factorial(int a);
int main(){
    int j;
    cout << "Introduzca el valor del numero" << endl;
    cin >> j;
    int fact = Factorial(j);
    cout << ("El %d! es : %d\n",j,fact);

    return 0;
}
int Factorial (int a){
int i;
int resultado = 1;
for (i = 1; i <= a; i++){
        resultado *= i;
}
return resultado;
}
