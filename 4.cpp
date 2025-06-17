#include <iostream>
#include <string>
using namespace std;
int main() {

    string license;
    string age;

cout << " Do you have a license (yes/no):";
cin >> license;
cout << "What is your age:";
cin >> age;
if ( license == "yes" && age >= "18") {
    cout << "Youcan drive a car.";
}
    else { 
        cout << "You are not allowed to drive";
    }
 return 0;
}


