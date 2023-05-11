#include <iostream>
#include <string>
#include <vector>

// Function to calculate overtime pay
double overtime_check(double hours, double pay) {
    if (hours > 40) {
        return (40 * pay) + ((hours - 40) * (pay * 1.5));
    } else {
        return hours * pay;
    }
}

int main() {
    // 1. Conditional Basics
    // 1-a. Prompt the user for a day of the week, print out whether the day is Monday or not
    std::cout << "Day of the week? ";
    std::string day;
    std::getline(std::cin, day);

    if (day == "Monday") {
        std::cout << "Yes, it's Monday." << std::endl;
    } else {
        std::cout << "It's not Monday." << std::endl;
    }

    // 1-b. Prompt the user for a day of the week, print out whether the day is a weekday or a weekend
    std::cout << "What day of the week is it? ";
    std::getline(std::cin, day);

    if (day == "Saturday" || day == "Sunday") {
        std::cout << "Weekend baby!" << std::endl;
    } else {
        std::cout << "Back to the grind..." << std::endl;
    }

    // 1-c. Create variables and make up values
    double hours_worked = 52;
    double hourly_rate = 16.50;
    double paycheck = overtime_check(hours_worked, hourly_rate);

    std::cout << "Paycheck: $" << paycheck << std::endl;
    std::cout << "Hold your horses!\n\nYou have to pay Uncle Sam!" << std::endl;
    std::cout << "Paycheck AFTER taxes: $" << paycheck * 0.7 << std::endl;

    // 2. Loop Basics
    // 2a. While
    // 2a-I. Create an integer variable i with a value of 5.
    int i = 5;

    // 2a-II. Create a while loop that runs as long as i is less than or equal to 15
    while (i <= 15) {
        std::cout << i << std::endl;
        i++;
    }

    // 2a-IV. Create a while loop that will count by 2's starting with 0 and ending at 100.
    i = 0;
    while (i <= 100) {
        std::cout << i << std::endl;
        i += 2;
    }

    // 2a-V. Alter your loop to count backwards by 5's from 100 to -10
    i = 100;
    while (i >= -10) {
        std::cout << i << std::endl;
        i -= 5;
    }

    // 2a-VI. Create a while loop that starts at 2 and displays the number squared on each line while the number is less than 1,000,000.
    i = 2;
    while (i < 1000000) {
        std::cout << i << std::endl;
        i *= i;
    }

    // 2a-VI. Write a loop that uses print to create the output shown below
    i = 100;
    while (i >= 5) {
        std::cout << i << std::endl;
        i -= 5;
    }

    // 2b
    // 2b. For Loops
    // 2b-I. Write some code that prompts the user for a number,
    //       then shows a multiplication table up through 10 for that number.

    std::cout << "Enter a number: ";
    int num_mult;
    std::cin >> num_mult;

    for (int i = 1; i <= 10; i++) {
        std::cout << i << " x " << num_mult << " = " << i * num_mult << std::endl;
    }

    // 2b-II. Create a for loop that uses print to create the output shown below.
    //
    // 1
    // 22
    // 333
    // 4444
    // 55555
    // 666666
    // 7777777
    // 88888888
    // 999999999
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << i;
        }
        std::cout << std::endl;
    }

    // 2c. break and continue
    // 2c-I. Write a program that prompts the user for a positive integer.
    //       Next write a loop that prints out the numbers from the number the user entered down to 1.
    std::cout << "Enter a positive number: ";
    int count_down;
    std::cin >> count_down;

    while (count_down >= 1) {
        std::cout << count_down << std::endl;
        count_down--;
    }

    // 2c-II. Prompt the user to enter a positive number and write a loop that counts from 0 to that number.
    //        (Hints: first make sure that the value the user entered is a valid number,
    //        also note that the input function returns a string, so you'll need to convert
    //        this to a numeric type.)

    int num_input;
    while (true) {
        std::cout << "Enter a positive number between 1 and 50: ";
        std::cin >> num_input;

        if (num_input > 0 && num_input <= 50 && num_input % 2 != 0) {
            std::cout << "Correct number!" << std::endl;
            break;
        } else {
            std::cout << "Invalid input. Please try again." << std::endl;
            continue;
        }
    }

    int i = 1;
    while (i <= 50) {
        if (i == num_input) {
            std::cout << "Yikes! Skipping number: " << num_input << std::endl;
            i++;
            continue;
        }
        std::cout << i << std::endl;
        i++;
    }
    // 2c-III. Prompt the user for an odd number between 1 and 50.
    //         Use a loop and a break statement to continue prompting
    //         the user if they enter invalid input.
    //         (Hint: use the isdigit method on strings to determine this).
    //         Your output should look like this:
    //
    //         Number to skip is: 27
    //
    //         Here is an odd number: 1
    //         Here is an odd number: 3
    //         Here is an odd number: 5
    //         Here is an odd number: 7
    //         Here is an odd number: 9
    //         Here is an odd number: 11
    //         Here is an odd number: 13
    //         Here is an odd number: 15
    //         Here is an odd number: 17

    int number_to_skip;
    while (true) {
        std::cout << "Enter an odd number between 1 and 50: ";
        std::cin >> number_to_skip;

        if (number_to_skip >= 1 && number_to_skip <= 50 && number_to_skip % 2 != 0) {
            break;
        } else {
            std::cout << "Invalid input. Please try again." << std::endl;
            continue;
        }
    }

    std::cout << "\nNumber to skip is: " << number_to_skip << std::endl;

    for (int i = 1; i <= 50; i++) {
        if (i == number_to_skip) {
            std::cout << "Yikes! Skipping number: " << number_to_skip << std::endl;
            continue;
        }
        if (i % 2 != 0) {
            std::cout << "Here is an odd number: " << i << std::endl;
        }
    }

    // 3. FizzBuzz
    // One of the most common interview questions for entry-level programmers is the FizzBuzz test.
    // Developed by Imran Ghory, the test is designed to test basic looping and conditional logic skills.
    // Write a program that prints the numbers from 1 to 100.
    // For multiples of three, print "Fizz" instead of the number.
    // For multiples of five, print "Buzz".
    // For numbers which are multiples of both three and five, print "FizzBuzz".

    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz" << std::endl;
        } else if (i % 3 == 0) {
            std::cout << "Fizz" << std::endl;
        } else if (i % 5 == 0) {
            std::cout << "Buzz" << std::endl;
        } else {
            std::cout << i << std::endl;
        }
    }

    // 4. Display a table of powers
    // Prompt the user to enter an integer.
    // Display a table of squares and cubes from 1 to the value entered.
    // Ask if the user wants to continue.
    // Assume that the user will enter valid data.
    // Only continue if the user agrees to.

    int num_in;
    char choice;

    do {
        std::cout << "Enter an integer: ";
        std::cin >> num_in;

        std::cout << "number | squared | cubed" << std::endl;
        std::cout << "----------------------------" << std::endl;

        for (int i = 1; i <= num_in; i++) {
    std::cout << i << "       | " << i * i << "       | " << i * i * i << std::endl;
    }

    std::cout << "Do you want to continue? (Y/N): ";
    std::cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    // 5. Convert given number grades into letter grades.
    // Prompt the user for a numerical grade from 0 to 100.
    // Display the corresponding letter grade.
    // Prompt the user to continue.
    // Assume that the user will enter valid integers for the grades.
    // The application should only continue if the user agrees to.
    // Grade Ranges:
    // A : 100 - 88
    // B : 87 - 80
    // C : 79 - 67
    // D : 66 - 60
    // F : 59 - 0
    // Bonus: Edit your grade ranges to include pluses and minuses (ex: 99-100 = A+).

    int num_grd;
    char continue_grade;

    do {
        std::cout << "Enter a grade number (0-100): ";
        std::cin >> num_grd;

        if (num_grd >= 88 && num_grd <= 100) {
            if (num_grd >= 98) {
                std::cout << "A+" << std::endl;
            } else if (num_grd <= 92) {
                std::cout << "A-" << std::endl;
            } else {
                std::cout << "A" << std::endl;
            }
        } else if (num_grd >= 80 && num_grd <= 87) {
            if (num_grd >= 86) {
                std::cout << "B+" << std::endl;
            } else if (num_grd <= 82) {
                std::cout << "B-" << std::endl;
            } else {
                std::cout << "B" << std::endl;
            }
        } else if (num_grd >= 67 && num_grd <= 79) {
            if (num_grd >= 76) {
                std::cout << "C+" << std::endl;
            } else if (num_grd <= 72) {
                std::cout << "C-" << std::endl;
            } else {
                std::cout << "C" << std::endl;
            }
        } else if (num_grd >= 60 && num_grd <= 66) {
            if (num_grd >= 64) {
                std::cout << "D+" << std::endl;
            } else if (num_grd <= 62) {
                std::cout << "D-" << std::endl;
            } else {
                std::cout << "D" << std::endl;
            }
        } else if (num_grd >= 0 && num_grd <= 59) {
            std::cout << "F" << std::endl;
        } else {
            std::cout << "Invalid grade entered!" << std::endl;
        }

        std::cout << "Do you want to continue? (Y/N): ";
        std::cin >> continue_grade;
    } while (continue_grade == 'Y' || continue_grade == 'y');

    // 6. Create a list of dictionaries where each dictionary represents a book that you have read.
    // Each dictionary in the list should have the keys title, author, and genre.
    // Loop through the list and print out information about each book.

    struct Book {
        std::string title;
        std::string author;
        std::string genre;
    };

    std::vector<Book> books = {
        {"First 20 Minutes", "Gretchen Reynolds", "Non-Fiction"},
        {"Harry Potter", "J.K. Rowling", "Fiction"},
        {"Variable Star", "Robert A. Heinlein", "Sci-Fi"}
    };

    for (const auto& book : books) {
        std::cout << "Title: " << book.title << std::endl;
        std::cout << "Author: " << book.author << std::endl;
        std::cout << "Genre: " << book.genre << std::endl;
        std::cout << std::endl;
    }

    // Prompt the user to enter a genre,
    // then loop through your books list and print out the titles of all the books in that genre.

    std::string genre_in;

    std::cout << "Enter a genre: ";
    std::cin >> genre_in;

    std::cout << std::endl;

    for (const auto& book : books) {
        if (book.genre == genre_in) {
            std::cout << "Title: " << book.title << std::endl;
        }
    }
