#include<iostream>
using namespace std;

bool Palindrome(string s) {
    int B = s.size() / 2;
    int count = 0;

    for (int i = 0; i < B; i++) {
       
        for (int j = s.size() - 1; j > B; j--) {
            if (s[i] == s[j]) {
                count++;
                break;  
            }
        }
    }

    if (count == B) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string A = "1234321";
    cout<<Palindrome(A)<<endl;
    string N= "1235721";
    cout<<Palindrome(N);
    return 0;
}
