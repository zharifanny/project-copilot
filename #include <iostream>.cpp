#include <iostream>
using namespace std;

//code written using project copilot
//this is awesome

string nama(string a, string b){
    return a + " " + b;
}

int main() {
    string a, b;
    
    cout << "Masukkan nama depan    : ";cin >> a;
    cout << "Masukkan nama belakang : ";cin >> b;
    
    cout << "Nama lengkap: " << nama(a, b) << endl;
    return 0;
}