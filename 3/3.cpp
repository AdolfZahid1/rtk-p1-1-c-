#include <iostream>
#include <cmath>
#include <tuple>
using namespace std;
tuple<int,int,int>pow234(int x){
    int a = pow(x,2);
    int b = pow(x,3);
    int c = pow(x,4);
    return make_tuple(a,b,c);
};
int main(){
    int a,b,c;
    tie(a,b,c) = pow234(5);
    cout << a<<","<<b<<","<<c<<endl;
    return 0;
};
