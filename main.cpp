#include <iostream>

#include "Everything.h"

int main() {
    // Init srand
    std::srand(static_cast<unsigned>(time(NULL)));

    User user;
    user.welcome();
    while (1)
        ;
    return 0;
}