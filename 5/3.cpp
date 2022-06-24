#include <iostream>
#include <fstream>
#include <vector>
#ifdef _WIN32
#include <windows.h>
#define SYSERROR()  GetLastError()
#else
#include <errno.h>
#define SYSERROR()  errno
#endif
using namespace std;

int main(){
    vector<int> positive,negative;
    string s;
    fstream f;
    ofstream g;
    f.open("First.txt");g.open("end.txt");
    if(f.is_open()){
        int s1;
        while(getline(f,s)){
            s1 = atoi(s.c_str());
            if(s1<0){
                positive.push_back(s1);
            };
            if (s1>0){
                negative.push_back(s1);
            };
        };
        f.close();
    }else{
        cerr<< "Failed to open file :"<<SYSERROR()<<endl;
        return -1;
    };
    if(g.is_open()){
        for(int i : positive){
            g << i<< endl;
        };
        for(int i : negative){
            g << i<<endl;
        };
        g.close();
    }else{
        cerr<<"Failed to open file :"<<SYSERROR()<<endl;
        return -1;
    };
};
