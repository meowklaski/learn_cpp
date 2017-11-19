#include "my_io.h"

double calculateResult(int op, double x, double y)
{
    if (op == 1)
        return x + y;

    if (op == 2)
        return x - y;

    if (op == 3)
        return x * y;

    if (op == 4)
        return x / y;
}

int main()
{
    double x;
    double y;
    int op;

    // Get first number from user
    x = getInput();
 
    // Get mathematical operation from user
    op = getOperation();
 
    // Get second number from user
    y = getInput();
 
    // Calculate result
    // Print result
    printResult(calculateResult(op, x, y));

    return 0;
}