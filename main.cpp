#define FMT_HEADER_ONLY
#include <iostream>
#include <fmt/core.h>

int main(int, char**){
    fmt::println("Hello, 111-- fmt debug mode");
    std::cout << "Hello, 222++ from test!\n" ;
}
 