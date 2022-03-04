#include<iostream>
using namespace std;
int fact(int N){
    if(N>0)
        return N*fact(N-1);
    else
        return 1; 
}

int main(){
    int X;
    cout<<"ENTER THE NUMBER"<<endl;
    cin>>X;
    cout<<fact(X);
}