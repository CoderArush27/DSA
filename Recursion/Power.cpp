#include<iostream>
using namespace std;
int power(int x,int k){
    if(k>0)
    return x * power(x,k-1);
    else
    return 1;
}

int main(){
    int n;
    int r;
    cout<<"ENTER THE NUMBER"<<endl;
    cin>>n;
    cout<<"ENTER THE POWER"<<endl;
    cin>>r;

    cout<<power(n,r);
}