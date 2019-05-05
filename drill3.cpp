#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first_name;
    string friend_name;
    char friend_sex = ' ';
    int age;

    string simple_error = "you're kidding!";

    cout << "Enter the name of the person you want to write to" << endl;
    cin >> first_name;
    cout << "Dear "<< first_name << "," << endl;

    cout << "How are you? \nI am fine. \nI miss you.\n";
    cout << "I feel I must write to say how pleased we were to receive your order and to thank you for the opportunity given to us to supply the goods you need. I hope our handling of your order will lead to further business between us, and to a happy and mutually beneficial association.\n";
    cout << "another friend: ";
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";
    cout << "Your friend is male(m) or female(f)? ";
    cin >> friend_sex;
    //cout << friend_sex;

    if (friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.\n";

    cout << "I hear you just had a birthday and you are ";
    cin >> age;

    if (age < 0 || age > 110)
        cout << simple_error;
    if (age < 12)
        cout << "\nNext year you will be " << age+1 << ".\n";
    if (age == 17)
        cout << "\nNext year you will be able to vote.\n";
    if (age > 70)
        cout << "\nI hope you are enjoying retirement.\n";

    cout << "\nYours sincerely,\n\nOszuszki Richard\n";

    return 0;
}
