#include <iostream>
#include <string>

using namespace std;

int main() {
    int price = 3;
    int little_mermaid = price * 3;
    int brother_bear = price * 5;
    int hercules = price * 1;

    int total_cost = little_mermaid + brother_bear + hercules;

    cout << "Rental Cost = $" << total_cost << endl;

    int google_pay_rate = 400;
    int amazon_pay_rate = 380;
    int facebook_pay_rate = 350;

    auto print_pay_total = [](int rate, int hours) {
        cout << "Pay Total: $" << rate * hours << endl;
    };

    print_pay_total(facebook_pay_rate, 10);
    print_pay_total(google_pay_rate, 6);
    print_pay_total(amazon_pay_rate, 4);

    bool class_full = true;
    bool schedule_conflict = true;

    if (class_full || schedule_conflict) {
        cout << "Can't Enroll" << endl;
    } else {
        cout << "Just do it!" << endl;
    }

    bool premium_member = true;
    bool expired = true;
    int purchases = 4;

    auto product_offer = [](bool prm, int pur, bool exp) {
        if (prm && !exp) {
            return true;
        } else if (pur > 2 && !exp) {
            return true;
        } else {
            return false;
        }
    };

    cout << product_offer(premium_member, purchases, expired) << endl;

    string username = "codeup";
    string password = "notastrongpassword";

    bool password_size = password.size() >= 5;
    cout << "password test" << endl;
    cout << password_size << endl;

    bool username_size = username.size() <= 20;
    cout << "username test" << endl;
    cout << username_size << endl;

    bool not_same_check = username != password;
    cout << not_same_check << endl;

    cout << "White Space Check" << endl;

    auto white_space_check = [](string user_name, string pass_word) {
        if (user_name.front() == ' ' || user_name.back() == ' ' || pass_word.front() == ' ' || pass_word.back() == ' ') {
            return true;
        } else {
            return false;
        }
    };

    cout << white_space_check(username, password) << endl;

    return 0;
}

