#include <iostream>
#include <string>
using namespace std;
void manipulate(string s,char n,string *s2){
    for (int i =0;i<s.length();i++) {
        if (s[i]!=n) {
            *s2+=s[i];
        };
    };
};
int main(){
    string s,s2;
    char n;
    cout << "Ievadit simbolu virkne: ";
    getline(cin,s);
    cout << "Izveleties simbolu ko izdzest: ";
    cin >> n;
    manipulate(s,n,&s2);
    cout << s2;
};
