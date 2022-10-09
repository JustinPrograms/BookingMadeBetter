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
    bool isStudent;
    bool isTeacher;
    bool isLoggedIn = false;
    int id;

    // Init private functions

public:
    // Init variablies
    int in;



    // Init functions
    void welcome();
    void signup();
    void loginInfo();
    void login(std::string tempUsername, std::string tempPassword);
    void portal();
    void dates();


};

//User();
//virtual  ~ User();

#endif
