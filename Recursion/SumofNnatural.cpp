#include<iostream>
using namespace std;
int sum(int N){
    if(N>0){
    return N+sum(N-1);
    }
    else{
        return 0;
    }
}
int main(){
    int X;
    cout<<"ENTER THE NATURAL NUMBER"<<endl;
    cin>>X;
    cout<<sum(X);
}
