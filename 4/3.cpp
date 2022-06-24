#include <iostream>

using namespace std;
int maxminfound(int a[3][3],int* max1,int* max2,int* min1,int* min2){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++) {
            if(a[*max1][*max2]<a[i][j]){
                *max1=i;
                *max2=j;
            };
            if(a[*min1][*min2]>a[i][j]){
                *min1=i;
                *min2=j;
            };
        };
    };
};
int main(){
    int a[3][3]={
            {100,101,103},
            {104,100,99},
            {106,107,108}
    };
    int max1,max2;
    int min1=0,min2 = 0;
    maxminfound(a,&max1,&max2,&min1,&min2);
    cout << "Max " <<a[max1][max2]<<endl;
    cout << "Min " <<a[min1][min2]<<endl;
    for (int k=0;k<3;k++){
        swap(a[k][max1],a[k][min1]);
    };
    for (auto & i : a) {
        cout <<"{";
        for (int j : i) {
            cout << j << " ";
        };
        cout<<"}"<<endl;
    };
};
