#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#define SYSERROR()  GetLastError()
#else
#include <errno.h>
#define SYSERROR()  errno
#endif
using namespace std;

int main(){
    string s;
    ofstream file,file1,file2,file3;
    file1.open("f1.txt");file2.open("f2.txt");file3.open("f3.txt");file.open("f.txt");
    if (file.is_open()) {
        for (int i = 0; i < 26; i++) {
            file << rand() %100 - 10 << endl;
            file.flush();
        };
        file.close();
    }else{
        cerr<<"Failed to open file : "<<SYSERROR()<<endl;
        return -1;
    };
    ifstream in;
    in.open("f.txt");
    if (in.is_open()&&file1.is_open()&&file2.is_open()&&file3.is_open()){
        int s1;
        while (getline(in, s)) {
            s1 = atoi(s.c_str());
            if (s1>0){
                file1 << s1 << endl;
            };
            if(s1<0){
                file2 << s1<<endl;
            };
            if(s1==0){
                file3<<s1<<endl;
            };
        };
        in.close();file1.close();file2.close();file3.close();
    }else{
        cerr<<"Failed to open file : "<<SYSERROR()<<endl;
        return -1;
    };
 };