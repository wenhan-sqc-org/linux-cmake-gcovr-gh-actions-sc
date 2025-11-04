#include "helper.hpp"
#include <cctype> // MISRA violation: use of C standard library header
#include <iostream>

// MISRA violation: non-const global variable
int global_var = 42;

// MISRA violation: static variable with external linkage
static int static_global = 0;

// MISRA violation: raw pointer
void use_raw_pointer() {
    int* p = new int(5);
    std::cout << *p << std::endl;
    delete p;
}

// MISRA violation: goto statement
void use_goto() {
    int i = 0;
    goto label;
    i = 1;
label:
    std::cout << "Goto used: " << i << std::endl;
}

// MISRA violation: implicit int promotion
void implicit_promotion() {
    char c = 100;
    int result = c + 2000000000; // char promoted to int
    std::cout << "Promotion: " << result << std::endl;
}

int main() {
    std::cout << "MISRA C++ 2023 violation test" << std::endl;
    use_raw_pointer();
    use_goto();
    implicit_promotion();
    // MISRA violation: function with non-void return type, no return
    helper_func();
    // MISRA violation: use of non-const reference
    int x = 10;
    modify_value(x);
    // MISRA violation: use of static local variable
    static_local();
    // MISRA violation: use of C standard library function
    std::cout << std::isdigit('8') << std::endl;
    return 0;
}
