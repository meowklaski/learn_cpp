#include<iostream>

int main()
{
    bool b = false;
    bool b2(true);
    bool b3{false};
    std::cout << std::boolalpha;
    std::cout << b << b2 << b3 << std::endl;

    if (false)
        std::cout << "I'm true" << std::endl;
    else
        std::cout << "I'm false" << std::endl;
    return 0;
}