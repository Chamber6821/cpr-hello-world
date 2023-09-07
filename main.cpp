#include "cpr/cpr.h"
#include <iostream>

int main() {
    std::cout << cpr::Get(cpr::Url("https://google.com")).status_line << std::endl;
    return 0;
}
