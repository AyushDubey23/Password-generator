#include<bits/stdc++.h>
using namespace std;

string generatePassword(int length) {
    string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_-+=<>?";
    string password = "";
    
    for (int i = 0; i < length; i++) {
        password += characters[rand() % characters.length()];
    }
    
    return password;
}

int main() {
    srand(time(0)); 
    
    int length;
    cout << "Enter the password length: ";
    cin >> length;

    string password = generatePassword(length);
    cout << "Generated Password: " << password << endl;

    return 0;
}
