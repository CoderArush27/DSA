#include<iostream>
using namespace std;
void sum(int n){
    if(n>0){
        sum(n-1);
        cout<<n<<" ";
    }
}
int main(){
    int a=3;
    sum(a);
}