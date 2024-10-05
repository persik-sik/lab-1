#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a;
    float b; 
    float c; 
    float x; 
    float y;
    cin >> a;
    cin >> b;
    cin >> c;
    x = (-1 * b + sqrt(b*b - 4*a*c))/(2*a);
    y = (-1 * b - sqrt(b*b - 4*a*c))/(2*a);
    if (((a*x*x + b*x + c)==0) and ((a*y*y + b*y + c)==0)){
        cout << "Первый корень: "<< x<<endl;
        cout << "Второй корень: "<< y;
    }
    return 0;
}
