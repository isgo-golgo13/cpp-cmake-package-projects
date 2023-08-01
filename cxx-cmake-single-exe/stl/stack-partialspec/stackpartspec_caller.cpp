#include "includes/stackpartspec.hpp"

#include <iostream>
#include <memory>
#include <string>

int main()
{
    Stack<std::shared_ptr<int>> ptr_intstack;
    ptr_intstack.push(std::make_shared<int>(15));

    std::cout << *ptr_intstack.top() << '\n';

    return EXIT_SUCCESS;

}