#include <iostream>
using namespace std;
int main() {
    int answer;
    cout << "What is 5+3?";
    cin >> answer;
    while ( answer != 8) {
        cout << "Wrong try again:";
        cin >> answer;
        
    }
    cout << "Correct! 5+3=8" << endl;
    return 0;
}