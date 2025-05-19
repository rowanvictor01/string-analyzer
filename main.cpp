/*
- Total number of character including spaces
- Number of letters
- Number of vowels
- Number of digits
- Whether it's a palindrome
- str.erase(remove_if(str.begin(), str.end(), isspace), str.end());
 */

int letter = 0;
int digits = 0;
int vowels = 0;
int symbols = 0;

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

void check(string inp);
bool is_palindrome(string inp);

int main() {
    cout << "Hi, Please enter a phrase or sentence: " << flush;
    string input;
    getline(cin, input);

    check(input);
    bool pali = is_palindrome(input);

    cout << "\nAnalysis: " << endl;
    cout << "Total Characters: " << letter + digits + symbols << endl;
    cout << "Letters: " << letter << endl;
    cout << "Digits: " << digits << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Special: " << symbols << endl;
    cout << "Palindrome: " <<(pali ? "Yes" : "No") << endl;

    return 0;
}

void check(string inp) {
    for (char ccc : inp) {
        char c = tolower(ccc);
        if (isalpha(c)) {
            letter++;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            }
        }
        else if (isdigit(c)) {
            digits++;
        }
        else {
            symbols++;
        }
    }
}

bool is_palindrome(string inp) {
    string temp = inp;
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower); // converts characters to lower case
    temp.erase(remove_if(temp.begin(), temp.end(), [](char c) {return !isalnum(c);}),temp.end()); // algo to remove spaces and special characters

    string reversed = temp; // after "cleaning" temp, we'll now reverse it
    reverse(reversed.begin(), reversed.end());

    return temp == reversed;
}