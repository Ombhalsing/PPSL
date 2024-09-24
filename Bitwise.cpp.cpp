#include <iostream>
using namespace std;

int main() {
    int a =3;
    int b = 9;

    // Bitwise AND
    cout <<"(a & b)is" << (a & b) << endl; 

    // Bitwise OR
    cout << " (a | b)is " << (a | b) << endl; 

    // Bitwise XOR
    cout << "(a ^ b)is " << (a ^ b) << endl; 

    // Left Shift
    cout << "(a << 1)is " << (a << 2) << endl; 

    // Right Shift
    cout << "(a >> 1)is " << (a >> 2) << endl;
    
    // Bitwise NOT
    cout << "(~a)is " << (~a) << endl;

    return 0;
}
