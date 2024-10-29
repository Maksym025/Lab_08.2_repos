#include <iostream>
#include <string>

using namespace std;


size_t CountAInLastWord(const string s) {
    size_t count = 0;
    size_t lastSpace = s.find_last_of(" ");
    string lastWord = (lastSpace == string::npos) ? s : s.substr(lastSpace + 1);

    for (size_t i = 0; i < lastWord.length(); i++) {
        if (lastWord[i] == 'a') {
            count++;
        }
    }
    return count;
}

int main() {
    string str;


    cout << "Enter string:" << endl;
    getline(cin, str);

    
    cout << "Count of 'a' in the last word: " << CountAInLastWord(str) << endl;

    return 0;
}
