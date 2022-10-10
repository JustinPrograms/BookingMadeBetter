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
    int count;
    bool has;

    // Init private functions

public:
    // Init variablies
    int in;
    std::string inStr;

    // Creating room variables
    std::string room;
    std::string time;
    double timeStart;
    double timeEnd;
    double max;

    // Init functions
    void welcome();
    void signup();
    void loginInfo();
    void login(std::string tempUsername, std::string tempPassword);

    void portal();
    void chromebookCheckout();
    void chromebookCheckin();

    void studyRooms();
};

// User();
// virtual  ~ User();

#endif