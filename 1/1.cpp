#include <iostream>
#include <cstdlib>
#include <time.h>
#include <unistd.h>
#include <math.h>
using namespace std;
time_t nTime;
void game1();
int main(){
    srand((unsigned) time(&nTime));
    game1();
};
void game1(){
    int mysticnum =1+ rand() % 5;
    cout <<  "Hello, you will need to guess number from 1 to 5!Good luck!"<<endl;
    for (int i =0;i<4;i++) {
        if (i==3) { cout << "Out of chances!"<<endl<<"Secret number was:"<<mysticnum; break; };
        int s=0;
        cout << "Number:";
        cin >> s;
        if (s == mysticnum) {
            cout << "You are correct!" << endl;
            break;
        } else {
            cout << "try next time" << endl;
            cout << "Chances left:" << 4 - (i + 2) << endl;
        };
    };
};