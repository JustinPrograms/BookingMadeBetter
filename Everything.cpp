#include <fstream>
#include "Everything.h"
#include "libs\\json.h"

using json = nlohmann::json;


void User::welcome() {
    std::cout<<"______________________________\n";
    std::cout<<"|           WELCOME          |\n";
    std::cout<<"|           TO THE           |\n";
    std::cout<<"|           BOOKING          |\n";
    std::cout<<"| SYSTEM 1. login 2. signup  |\n";
    std::cout<<"------------------------------\n";




    std::cin >> welcomeInput;
    switch (welcomeInput) {
        case 1:
            login();
        case 2:
            signup();
        case 3:
           dates();
    }

}

void User::signup() {
    // Sign up use json file
    std::ifstream f("D:\\Programing\\BookingMadeBetter\\data\\test.json");
    json data = json::parse(f);



    std::cout << "Please enter an username: ";
    std::cin >> username;

    std::cout << "Please enter a email address: ";
    std::cin >> email;

    std::cout << "Please enter a password: ";
    std::cin >> password;


    data["account"] = { {"Username", username}, {"Password", password}, {"Email", email}, {"Id", id} };

    std::ofstream o("D:\\Programing\\BookingMadeBetter\\data\\test.json");
    o << std::setw(4) << data << std::endl;

    auto count_id = data.count("account");
    std::cout << "Here is your count, " << count_id << std::endl;

    /* For help
     * When we make an account we need that in a array
     * then we can count the array etc for ids etc
     * array for multiple accounts
     * https://github.com/nlohmann/json/issues/470
     */

    welcome();


}

void User::login() {

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