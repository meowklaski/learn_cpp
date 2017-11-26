#include<iostream>

int main()
{
    char ch{97};
    std::cout << ch << std::endl;
    std::cout << static_cast<int>(ch) << std::endl;
    std::cout << "I am a char: \'a\', I am " << sizeof('a') << " bytes \n";
    std::cout << "I am a string: \"yo yo\" \n";
    return 0;
}