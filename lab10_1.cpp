// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    string text;
    for(int i = 0 ; i < 3 ; ++i)
        getline(cin , text);
    string grade[9] = {"A","B+","B","C+","C","D+","D","F","W"};
    srand(time(0));
    int random = rand() % 9;
    cout << "You will get "<< grade[random] <<" in this 261102.";
}