#include <iostream> // Preprocessing directive

/*
I'm a block comment
BAY
BEE
*/

int get_character()
{
    int x;
    std::cout << "Enter number.. " << std::endl;
    std::cin >> x;
    return x;
}

void print(int x)
{
    std::cout << x << std::endl;
}

int sum(int x, int y);  // Forward-declaration, known as a function prototype, of `sum`

int main()
{
    int x = get_character();
    int y = get_character();
    print(sum(x, y));

    return 0;
}


int sum(int x, int y)
{
    return x + y;
}