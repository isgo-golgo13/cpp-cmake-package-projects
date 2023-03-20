//#include "./includes/stack1.hpp"
#include "includes/stack.hpp"

#include <iostream>
#include <string>

int main() 
{
    Stack<int> int_stack;
    Stack<std::string> string_stack;

    //call APIs on int stack
    int_stack.push(15);
    std::cout<< int_stack.top() << '\n';

    //call APIs on string stack
    string_stack.push("text");
    std::cout << string_stack.top() << '\n';
    string_stack.pop();

    return EXIT_SUCCESS;

}