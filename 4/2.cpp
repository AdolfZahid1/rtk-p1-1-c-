#include <iostream>

using namespace std;
void zerotothree(int hundred[4][4],int *hz){
    for (int i = 0;i<4;i++) {
        *hz = *hz * hundred[i][i];
    };
    cout << "0 to 3 diagonale: "<< *hz<< endl;
};
void threetozero(int hundred[4][4],int *alt){
    int j =0;
    for (int i = 3;i>=0;i--){
        *alt = *alt * hundred[i][j];
        j++;
    };
    cout << "3 to 0 diagonale: "<< *alt << endl;
};
int main(){
    int hundred[4][4]={
            {-50,25,75,-100},
            {50,-25,-75,100},
            {15,92,-45,54},
            {55,65,23,12}
    };
    int hz=1,alt=1;
    zerotothree(hundred,&hz);
    threetozero(hundred,&alt);
    for (int i = 0;i<4;i++) {
        cout <<"{";
        for (int j =0;j<4;j++) {
            cout << hundred[i][j] << " ";
        };
        cout<<"}"<<endl;
    };
 };
