#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

size_t MinLength(const string s) {
    size_t min_length = string::npos; 

    size_t start = 0, finish;
    while ((start = s.find_first_of("0123456789", start)) != string::npos) {

        finish = s.find_first_not_of("0123456789", start);

        if (finish == string::npos)
            finish = s.length();

        size_t current_length = finish - start;
        if (current_length < min_length)
            min_length = current_length;

        start = finish + 1;
    }

    if (min_length == string::npos)
        return 0;
    else
        return min_length;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "Length of shortest word: " << MinLength(str) << endl;
    return 0;
}
