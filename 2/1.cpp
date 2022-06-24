//Risināt lineāro vienādojumu un kvadrātvienādojumu
#include <iostream>
#include <cmath>

int linear(double a, double b, double &root);
using namespace std;
int linear(double a, double b,double &root){
    // check if linear is possible
    if(a==0 && b!=0)
        return -3;
    if( a==0 && b==0)
        return -2;
    if(b==0 && a!=0)
        return -1;
    root=-b/a;// get and set root
    return 1; // return positive
};
int main(){
    //user choice
    cout <<"Kvadratvienadojumu risinajums"<< endl;
    double a,b,c,root; // declare vars
    cout << "a:"; cin >> a ;cout << "b:";cin >> b;cout << "c:"; cin >> c; // get user input
    if (b==0 || c==0){cout << "b or c is 0, no answer!"<< endl; system("pause");};
    if (a!=0) {
        if ((b * b - 4 * a * c) > 0) { // check if D > 0
            root = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a); // get x1
            cout << "x1 " << root << endl;
            root = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a); // get x2
            cout << "x2 " << root << endl;
        } else {
            if ((b * b - 4 * a * c) == 0) { // check if D=0
                root = -b / 2 * a; // get x
                cout << "Diskriminants ir 0. Sakne ir:" << root << endl;
            } else { // check if D < 0
                cout << "Diskriminants ir mazaks par 0, saknu nav." << endl; //
            };
        };
    }else{
        int temp = linear(b, c, root); // run linear func with b,c
        if (temp == 1)
            cout << "x = " << root << endl; // answer output
        system("pause");
    };
};
