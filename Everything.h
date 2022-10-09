#ifndef BOOKINGMADEBETTER_EVERYTHING_H
#define BOOKINGMADEBETTER_EVERYTHING_H

#include <vector>
#include <iostream>
#include <ctime>

class User {

private:
    // Init private variables
    std::string username;
    std::string email;
    std::string password;
    int id;

public:
    // Init variablies
    int welcomeInput;



    // Init functions
    void welcome();
    void signup();
    void loginInfo();
    void login(std::string username, std::string password);
    void portal();
    void dates();


};

//User();
//virtual  ~ User();

#endif
