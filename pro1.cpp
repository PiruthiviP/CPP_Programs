//Create a class Number with three private members. Overload – operator to negate objects
//of Number class
#include <iostream>
using namespace std;

class Number {
private:
    int num1 = 10, num2 = 20, num3 = 30;

public:
    void show() {
        cout << "The number 1 is: " << num1 << ", number 2 is: " << num2 << " and the number 3 is: " << num3 << endl;
    }

    
    void operator-() {
        num1 = -num1;
        num2 = -num2;
        num3 = -num3;
    }
};

int main() {
    Number n1;
    n1.show();
    -n1; 
    n1.show();

    return 0;
}