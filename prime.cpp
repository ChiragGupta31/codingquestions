#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=0;
    int c=2;
    while(n>1){
        if(n%c==0){
            cout<<c<<" ";
            n=n/c;
        }else{
            c++;
        }
    }
    return 0;
}