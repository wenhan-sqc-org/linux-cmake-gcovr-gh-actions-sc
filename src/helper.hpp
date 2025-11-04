#ifndef HELPER_HPP
#define HELPER_HPP

// MISRA violation: function with non-void return type, no return
int helper_func();

// MISRA violation: use of non-const reference
void modify_value(int& ref);

// MISRA violation: use of static local variable
void static_local();

#endif // HELPER_HPP
