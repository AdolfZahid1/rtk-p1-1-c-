#include <iostream>
#include <cmath>
using namespace std;
int sigma(int summ, int n){
    for (int i=1; i<n+1; i++)
    {summ=summ+i;};
    return summ;
};
double t (double x,double n){
    double k = sigma(0,n);
    return (pow(x,2*k+1)/2*k+1)/(pow(x,2*k)/2*k-1);
};
int main(){
    double y;
    cout<<"y:";cin >> y;
    cout << (1.7*t(0.25,10)+2*t(1+y,15))/(5-t(y*y-1,8));
    return 0 ;
 };
