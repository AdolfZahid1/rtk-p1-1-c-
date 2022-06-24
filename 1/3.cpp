#include <iostream>
#include <cstdlib>
#include <time.h>
#include <unistd.h>
#include <math.h>
using namespace std;
time_t nTime;
void bintodec();
int main(){
    bintodec();
};
void bintodec(){
    int bin,dec,i,rem;
    cout << "Enter binary number:";
    cin >> bin;
    while (bin!=0) {
        rem = bin % 10;
        bin /= 10;
        dec += rem * pow(2, i);
        ++i;
    };
    cout << dec;
};