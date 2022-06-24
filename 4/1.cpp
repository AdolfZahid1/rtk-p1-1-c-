#include <iostream>

using namespace std;
void maxminfound(int s[10],int *min, int *max){
    for (int i = 0;i<10;i++){
        if (s[*min]>s[i]){
            *min = i;
        };
        if (s[*max]<s[i]){
            *max = i;
        };
    };
    cout<< "Max: "<<s[*max]<< endl;
    cout<< "Min: "<<s[*min]<< endl;
};
int main(){
    int s[10]={10,9,8,7,6,5,4,3,2,1};
    int min=0,max=0;
    cout<<"s=[";
    for (int i : s) {
        cout <<i<<" ";
    };
    cout<<"]"<<endl;
    maxminfound(s,&min,&max);
    swap(s[max],s[min]);
    cout<<"s=[";
    for (int i : s) {
        cout <<i<<" ";
    };
    cout<<"]"<<endl;
};