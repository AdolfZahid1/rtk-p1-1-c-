#include <iostream>
#include <cmath>
using namespace std;

double h(double a,double b){
    return (a/(1+b*b)+b)/((1+a*a)-pow((a-b),3));
};

int main(){
    double s,t;
    cout << "Input of s,t:"<<endl;
    cin >> s;
    cin >> t;
    cout << h(s,t)+h(s-t,s*t)+h(1,1);
    return 0;
};
