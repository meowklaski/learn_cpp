#include <iostream>
 
int main()
{
    int bin(0);
    bin = 0b1;  // assign binary 0000 0001 to the variable
    bin = 0b11; // assign binary 0000 0011 to the variable
    bin = 0b1010; // assign binary 0000 1010 to the variable
    bin = 0b11110000; // assign binary 1111 0000 to the variable
    std::cout << bin << '\n';
    return 0;
}