#include "helper.hpp"
#include <iostream>

// MISRA violation: function with non-void return type, no return
int helper_func() {
    std::cout << "helper_func called" << std::endl;
    // No return statement
}

// MISRA violation: use of non-const reference
void modify_value(int& ref) {
    ref = 42;
    std::cout << "Value modified: " << ref << std::endl;
}

// MISRA violation: use of static local variable
void static_local() {
    static int counter = 0;
    ++counter;
    std::cout << "Static local: " << counter << std::endl;
}
