#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

string getFirstTwoLetters(string name) {
    string firstTwo = name.substr(0, 2);
    for (int i = 0; i < firstTwo.size(); i++) {
        firstTwo[i] = tolower(firstTwo[i]);
    }
    return firstTwo;
}

string getFirstFourLetters(string name) {
    string firstFour = name.substr(0, 4);
    for (int i = 0; i < firstFour.size(); i++) {
        firstFour[i] = tolower(firstFour[i]);
    }
    return firstFour;
}

string getBirthDate() {
    time_t now = time(0);
    tm* ltm = localtime(&now);
    int currentYear = 1900 + ltm->tm_year;

    int day, month, year;
    string b_day, b_month, b_year;
    while (true) {
        try {
            cout << "Please enter the day (DD) you were born: ";
            cin >> day;
            cout << "Please enter the month (MM) you were born: ";
            cin >> month;
            cout << "Please enter the year (YYYY) you were born: ";
            cin >> year;
            if (day > 0 && day <= 31 && month > 0 && month <= 12 && year > 1800 && year <= currentYear) {
                stringstream ss;
                ss << setw(2) << setfill('0') << month << "-" << setw(2) << setfill('0') << day << "-" << year;
                string b_date = ss.str();
                char loop_exit;
                cout << "Is your birthday (y/n?): " << b_date;
                cin >> loop_exit;
                if (tolower(loop_exit) == 'y') {
                    return b_date;
                }
            }
            else {
                cout << "You entered invalid numbers. Try again...\n";
            }
        }
        catch (const std::exception&) {
            cout << "Oops! That was not a number. Try again...\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

string getUserName(string first_name, string last_name, string birth_date) {
    string user_name = getFirstTwoLetters(first_name) + getFirstFourLetters(last_name) + birth_date.substr(6, 2);
    return user_name;
}

int main() {
    string first_name, last_name, birth_date;
    cout << "Enter your first name here: ";
    getline(cin, first_name);
    cout << "Enter your last name here: ";
    getline(cin, last_name);
    birth_date = getBirthDate();
    string user_name = getUserName(first_name, last_name, birth_date);
    cout << "Your username is: " << user_name << endl;
    return 0;
}

