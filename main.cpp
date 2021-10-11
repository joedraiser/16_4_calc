#include <iostream>
#include <string>

std::string op="+-*/";

int main()
{
    std::cout << "Input calculation to perform: ";
    std::string input;
    std::cin >> input;

    double a,b;

    a=std::stod(input.substr(0, input.find_first_of(op)));
    b=std::stod(input.substr(input.find_first_of(op)+1, input.size()-1));

    char operation=input[input.find_first_of(op)];

    switch (operation)
    {
        case (int)'+':
            std::cout << a+b;
            break;
        case (int)'-':
            std::cout << a-b;
            break;
        case (int)'*':
            std::cout << a*b;
            break;
        case (int)'/':
            std::cout << a/b;
            break;
    }

    return 0;
}
