#include <iostream>
#include <unordered_map>
#include <vector>


using namespace std;

bool isAnagram(string s, string t) {
   
    if (s.length() != t.length()) return false;

    
    unordered_map<char, int> count_s;
    unordered_map<char, int> count_t;

    for (int i = 0; i < s.length(); i++) {
	count_s[s[i]]++;
	count_t[t[i]]++;
    }
    return count_s == count_t;
}

int main () {

    string s = "anagram";
    string t = "nagaram";

    cout << "output: " << isAnagram(s,t) << endl;

    return 0;
}
