// #include <cctype>
// #include <string>
// #include <algorithm>

using namespace std;

bool isPalindrome(string s){


  // change it into lovercase

  transform(s.begin(), s.end(), s.begin(), ::tolower);

  // remove non alphanumeric char

   
    for (char c : s) {
        if (isalnum(c)) {
            filtered += c;
        }
    }

    string reversed = filtered;
    
    reverse(reversed.begin(), reversed.end());


    return filtered == reversed;

}