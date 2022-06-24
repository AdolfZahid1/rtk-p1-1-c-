#include <iostream>
#include <fstream>
#ifdef _WIN32
#include <windows.h>
#define SYSERROR()  GetLastError()
#else
#include <errno.h>
#define SYSERROR()  errno
#endif
using namespace std;
void reverse(string& s){
    int len = s.length();
    for (int i=0;i<len/2;i++){
        swap(s[i],s[len-i-1]);
    };
};
int main(){
    string s,s1;
    ifstream fil;
    ofstream out;
    fil.open("F.txt");
    out.open("G.txt");
    if (fil.is_open() && out.is_open()) {
        while (getline(fil, s)) {
            reverse(s);
            out << s << endl;
            out.flush();
        };
        out.close();
        fil.close();
    }else{
        cerr<<"Failed to open file : "<<SYSERROR()<<endl;
        return -1;
    };
};