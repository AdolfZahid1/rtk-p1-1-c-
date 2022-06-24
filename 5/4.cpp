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
struct {
    int rooms;
    int level;
    int area;
    string adress;
}Hotel;
void readfile(int find,int max){
    int i=0;
    ifstream in;in.open("apartments.txt");
    ofstream f1;f1.open("rooms.txt");
    if (in.is_open() && f1.is_open()){
        string s;
        int s1;
        while(i<max){
            getline(in,s,'\n');
            s1 = atoi(s.c_str());
            Hotel.rooms = s1;
            getline(in,s,'\n');
            s1 = atoi(s.c_str());
            Hotel.level = s1;
            getline(in,s,'\n');
            s1 = atoi(s.c_str());
            Hotel.area = s1;
            getline(in,Hotel.adress,'\n');
            if(Hotel.adress=="") {
                break;
            };
            if(Hotel.level == find){
                f1 <<"Istabas:"<< Hotel.rooms<<endl;
                f1 << "Stavs:"<<Hotel.level<<endl;
                f1 << "Platums:"<<Hotel.area<<endl;
                f1 << "Adrese:"<<Hotel.adress<<endl;
            };
            i++;
        };
        in.close();
        f1.close();
    }else{
        cerr<< "Failed to open file :"<<SYSERROR()<<endl;
    };
};
int main(){
    ofstream l;
    int max,find;
    l.open("apartments.txt");
    cout << "Ievadiet cik dzivoklus jums ir (max: 5) :";
    cin >> max;
    if (max > 5){cerr << "Jums nevar but vairak par 5 dzivokliem";return -1;};
    if(l.is_open()){
        for (int i=0;i<max;i++){
            cout<<"Ievadiet istabu daudzumu :";cin >> Hotel.rooms;
            if (Hotel.rooms <=0){cerr << "Number of rooms cant be not a number <=0!"<<endl;return -1;
            };
            l<< Hotel.rooms<<endl;
            cout << "Ievadiet stavu :";cin >> Hotel.level;
            if (Hotel.level<0){cerr << "Level cant be not a number or smaller than 0!"<<endl;return -1;
            };
            l<< Hotel.level<<endl;
            cout<<"Ievadiet platumu :";cin >> Hotel.area;
            if (Hotel.area <=0){cerr << "Area cant be not a number or <= 0 !"<<endl;return -1;
            };
            l<< Hotel.area <<endl;
            cout << "Ievadiet dzivoklu adrese :";
            cin.ignore();
            getline(cin,Hotel.adress,'\n');
            if (Hotel.adress.length()==0){cerr << "Address cant be empty!"<<endl;return -1;
            };
            l<< Hotel.adress<<endl;

        };
        l.close();
    }else{
        cerr<<"Failed to open file :"<<SYSERROR()<<endl;
        return -1;
    };
    cout << "Dzivoklu meklesana\nIevadiet stavu ar kuru jus gribat dzivoklus :";
    cin >> find;
    if (find<0){
        cerr<<"Number cant be smaller than 0 or other symbol";return -1;
    };
    readfile(find,max);
};