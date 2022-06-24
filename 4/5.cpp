#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    string s2,del=" ";
    size_t pos = 0;
    int a=0;
    char n;
    getline(cin,s);
    cout<<"Ievadit simbolu no kuras sakas vardi:";
    cin>>n;
    while ((pos = s.find(del)) != string::npos) {
        s2 = s.substr(0, pos);
        if (s2.find_first_of(n)==0){
            cout << s2<<endl;
            a++;
        };
        s.erase(0, pos + del.length());
    };
    cout << "Vardu skaits: " << a;
};
