#include <iostream>
#include <cstdlib>
#include <time.h>
#include <unistd.h>
#include <math.h>
using namespace std;
time_t nTime;
void dectobin();
int main(){
    dectobin();
};
void dectobin(){
    int n;
    cout << "Provide a number, what you want to be binary:";
    cin >> n;
    int binNum[100], num=n;
    int i = 0;
    while (n > 0) {
        binNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout<<"Binary number of "<<num<<" is ";
    for (int j = i - 1; j >= 0; j--)
        cout << binNum[j];
    cout<<endl;
};