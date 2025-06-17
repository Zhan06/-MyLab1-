#include <iostream>
using namespace std;
int main (){
    int temp;
    cout << "What is the weather temperaturein Celsius?";
    cin >> temp;
    if (temp > 30){
        cout << "It is hot outside, bring an umbrella;
    }
     else if ( temp < 10){ 
        cout << " it is cold, wear the coat";
        }
        else { cout << "It's okay outside";
    }
        return 0;
    }

            
        
