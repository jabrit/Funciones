#include <iostream>

using namespace std;

void Max(int a, int b);
int main(){
    int x,y, Max;
 cout << ("Introduzca el valor del primer numero:");
 cin  >> x;
 cout << ("Introduzca el valor del segundo numero:");
 cin  >> y;

if (x>y){
    cout <<("&x es mayor \n",x);
}
else if (x<y){
    cout<<("&y es mayor \n",y);
}
else
    cout <<("Error \n");
return 0;
}

