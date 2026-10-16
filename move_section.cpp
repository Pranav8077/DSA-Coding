#include <iostream>
#include <string>
using namespace std;
string moveChars(string s) {
    string moved = "", remain = "";
    for (int i = 0; i < s.length(); i++) {
        int pos = i + 1;
        if (pos % 4 == 0 || pos % 6 == 0)
            moved += s[i];
        else
            remain += s[i];
    }
    return remain + moved;
} 
int main() {
    string s = "quickfoxjumps";
    cout << moveChars(s);
    return 0;
}