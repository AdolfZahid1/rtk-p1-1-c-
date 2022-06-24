#include <iostream>
using namespace std;

void fibo(int a){
    static int f1= 0,f2 = 1, f3;
    if (a>0){
        f3=f1+f2;
        f1=f2;
        f2=f3;
        cout << f3<< endl;
        fibo(a-1);
    };
};
int main(){
    int a;
    cout << "Enter a random number that u want to be fibonacci"<< endl;
    cin >> a;
    if (a == 0)cout << 0;
    if (a==1) cout << 0;
    if (a>1) {
        cout << 0 << endl;
        cout << 1 << endl;
        fibo(a - 2);
    };
    return 0;
};
