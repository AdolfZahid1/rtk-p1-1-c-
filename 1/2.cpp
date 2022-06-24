#include <iostream>
#include <cstdlib>
#include <time.h>
#include <unistd.h>
#include <math.h>
using namespace std;
time_t nTime;
void game2();
int main(){
    srand((unsigned) time(&nTime));
    game2();
};
void game2(){
    int number1,number2,number3;
    for (int i = 0; i < 45; i++) {
        number1 = 1+rand() % 3;
        number2 = 1+rand() % 3;
        number3 = 1+rand() % 3;
        cout << "|\t" << number1 << "\t";
        cout << "|\t" <<number2 << "\t";
        cout << "|\t"<< number3 << "\t|" << "\n";
        usleep(35000);
    };
    number1 = 1+rand() % 3;
    number2 = 1+rand() % 3;
    number3 = 1+rand() % 3;
    cout << "|\t" << number1 << "\t";
    cout << "|\t" <<number2 << "\t";
    cout << "|\t"<< number3 << "\t|" << "<";
    if ((number1 == number2) && (number1 == number3)) {
        cout << " Streak!";
    } else if (number1 == number2) {
        cout << " you won!";
    } else if (number2 == number3) {
        cout << " you won!";
    } else {
        cout << " you lost haha!";
    };
};