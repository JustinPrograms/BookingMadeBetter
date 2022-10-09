#include <iostream>
#include "Everything.h"

int main() {
    // Init srand
    std::srand(static_cast<unsigned>(time(NULL)));

    User user;
    user.welcome();


    return 0;
}
