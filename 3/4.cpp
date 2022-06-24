#include <iostream>
#include <cmath>
#include <tuple>
using namespace std;
tuple <int,int> mean(int x,int y){
double amean = (x+y)/2;
double gmean = sqrt(x*y);
return make_tuple(amean,gmean);
};
int main(){
    int a,b,c,d;
    int gmean,amean;
    cout << "Input a,b,c,d:"<< endl;
    cout << "a:";cin >> a;
    cout << "b:";cin >> b;
    cout << "c:";cin >> c;
    cout << "d:";cin >> d;
    tie(amean,gmean) = mean(a,b);
    cout << "Arithmetic mean (a,b):"<< amean<<endl;
    cout << "Geometric mean (a,b):"<< gmean<<endl;
    tie(amean,gmean) = mean(a,c);
    cout << "Arithmetic mean (a,c):"<< amean<<endl;
    cout << "Geometric mean (a,c):"<< gmean<<endl;
    tie(amean,gmean) = mean(a,d);
    cout << "Arithmetic mean (a,d):"<< amean<<endl;
    cout << "Geometric mean (a,d):"<< gmean<<endl;
    return 0;
};
