#include <fstream>
#include "Everything.h"
#include "libs\\json.h"

using json = nlohmann::json;


void User::welcome() {

    // Welcome prompt
    std::cout<<"______________________________\n";
    std::cout<<"|           WELCOME          |\n";
    std::cout<<"|           TO THE           |\n";
    std::cout<<"|           BOOKING          |\n";
    std::cout<<"| SYSTEM 1. login 2. signup  |\n";
    std::cout<<"------------------------------\n";

    // Getting input and selecting function
    std::cin >> in;
    switch (in) {
        case 1:
            loginInfo();
        case 2:
            signup();
        default:
            welcome();
    }

}

void User::signup() {
    // maybe clears the console (doesnt work on clion, try on replit)
    //std::cout << "\x1B[2J\x1B[H";


    // Sign up prompt
    std::cout<<"______________________________\n";
    std::cout<<"|                            |\n";
    std::cout<<"|           Sign Up          |\n";
    std::cout<<"|                            |\n";
    std::cout<<"------------------------------\n";

    // Getting signup information
    std::cout << "Please enter an username: ";
    std::cin >> username;

    std::cout << "Please enter a email address: ";
    std::cin >> email;

    std::cout << "Please enter a password: ";
    std::cin >> password;





    // Reading Json file
    std::ifstream o(R"(D:\Programing\BookingMadeBetter\data\accounts.json)");
    json data = json::parse(o);

    // Adding data
    id = data.size();
    data[id] = { {"username", username}, {"password", password}, {"email", email}, {"id", id}, {"isStudent", isStudent} };

    // Writing to json file
    std::ofstream w("D:\\Programing\\BookingMadeBetter\\data\\accounts.json");
    w << std::setw(4) << data << std::endl;
    w.flush();


    login(username, password);


}

void User::loginInfo() {

    // Login prompt
    std::cout<<"______________________________\n";
    std::cout<<"|                            |\n";
    std::cout<<"|           Login            |\n";
    std::cout<<"|                            |\n";
    std::cout<<"------------------------------\n";

    // Getting login information
    std::cout << "\nUsername: ";
    std::cin >> username;

    std::cout << "\nPassword: ";
    std::cin >> password;

    // Calling login function
    login(username, password);

}

void User::login(std::string tempUsername, std::string tempPassword) {

    // Reading Json file
    std::ifstream o(R"(D:\Programing\BookingMadeBetter\data\accounts.json)");
    json data = json::parse(o);


    // Checking if valid login information
    for (int i = 0; i < data.size(); i++) {
        if (data[i]["username"] == tempUsername && data[i]["password"] == tempPassword) {

            // If valid gets all the information
            id = static_cast<int>(data[i]["id"]);
            username =  data[i]["username"];
            password = data[i]["password"];
            isLoggedIn = true;

            // Calls portal function
            std::cout << "Login successful" << std::endl;
            portal();

        }
    }
    // If login fails restart
    if (!isLoggedIn) {
        std::cout << "Incorrect login information. Please try again" << std::endl;
        loginInfo();
    }


}

void User::portal() {

    // Portal prompt
    std::cout<<"______________________________\n";
    std::cout<<"|        Library Portal      |\n";
    std::cout<<"|                            |\n";
    std::cout<<"|        1. Study Room       |\n";
    std::cout<<"|        2. Chromebooks      |\n";
    std::cout<<"------------------------------\n";

    std::cin  >> in;

    // Switch statement

}

void User::dates() {
    std::vector<std::string> timeSlotsMonday;
    std::vector<std::string> timeSlotsTuesday;
    std::vector<std::string> timeSlotsWednesday;
    std::vector<std::string> timeSlotsThursday;
    std::vector<std::string> timeSlotsFriday;
    std::string a[] = { "8:00am", "9:00am", "10:00am", "11:00am", "12:00pm", "1:00pm", "2:00pm", "3:00pm"};
    int decisionDate;

    // assign first 2 values
    timeSlotsMonday.assign(a, a + 8);
    timeSlotsTuesday.assign(a, a + 8);
    timeSlotsWednesday.assign(a, a + 8);
    timeSlotsThursday.assign(a, a + 8);
    timeSlotsFriday.assign(a, a + 8);

    std:: cout<< "Hello! Would you like to book a room? Enter the respected number code: " << std::endl;
    std:: cout<< "Enter 0 to skip room bookings" << std::endl;
    std:: cout<< "Enter 1 for time slots on Monday: ";


    for(int i=0; i != timeSlotsMonday.size(); i++) {
        std::cout << timeSlotsMonday.at(i) << ' ';
    }


    //std::cout << timeSlotsMonday.at(-1)

    std::cout << "\nEnter 2 for time slots on Tuesday: ";
    for(int i=0; i != timeSlotsTuesday.size(); i++) {
        std::cout << timeSlotsTuesday.at(i) << ' ';
    }

    std:: cout<< "\nEnter 3 for time slots on Wednesday: ";
    for(int i=0; i != timeSlotsWednesday.size(); i++) {
        std::cout << timeSlotsWednesday.at(i) << ' ';
    }

    std:: cout<< "\nEnter 4 for time slots on Thursday:";
    for(int i=0; i != timeSlotsThursday.size(); i++) {
        std::cout << timeSlotsThursday.at(i) << ' ';
    }

    std:: cout<< "\nEnter 5 for time slots on Friday: ";
    for(int i=0; i != timeSlotsFriday.size(); i++) {
        std::cout << timeSlotsFriday.at(i) << ' ';
    }

    std:: cin>> decisionDate;

    if(decisionDate == 0){
        std::cout << " ";

    }else if(decisionDate == 1) {
        std::cout << "\nFor what time would you like to book? ";
        for (int i = 0; i != timeSlotsMonday.size(); i++) {
            std::cout << timeSlotsMonday.at(i) << ' ';
        }
    }else if(decisionDate == 2){
        std::cout << "\nFor what time would you like to book? ";
        for(int i=0; i != timeSlotsTuesday.size(); i++) {
            std::cout << timeSlotsTuesday.at(i) << ' ';
        }
    }
    else if(decisionDate == 3){
        std::cout << "\nFor what time would you like to book? ";
        for(int i=0; i != timeSlotsWednesday.size(); i++) {
            std::cout << timeSlotsWednesday.at(i) << ' ';
        }
    }
    else if(decisionDate == 4){
        std::cout << "\nFor what time would you like to book? ";
        for(int i=0; i != timeSlotsThursday.size(); i++) {
            std::cout << timeSlotsThursday.at(i) << ' ';
        }
    }
    else if(decisionDate == 5){
        std::cout << "\nFor what time would you like to book? ";
        for(int i=0; i != timeSlotsFriday.size(); i++) {
            std::cout << timeSlotsFriday.at(i) << ' ';
        }
    }else{
        std::cout << "Please enter a valid number";
    }


}






