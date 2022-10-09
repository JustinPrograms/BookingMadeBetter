#ifndef BOOKINGMADEBETTER_EVERYTHING_H
#define BOOKINGMADEBETTER_EVERYTHING_H

#include <vector>
#include <iostream>
#include <ctime>

class User {

private:
    std::string username;
    std::string email;
    std::string password;
    int id = 0;

public:
    // Init variablies
    int welcomeInput;



    // Init functions
    void welcome();
    void signup();
    void login();
    void dates();


};

//User();
//virtual  ~ User();

#endif
