/*A RECURSION IN WHICH FUNCTION IS CALLED INDIRECTLY BY OTHER FUNCTIONS*/
#include<iostream>
using namespace std;
void funB(int n);  /*PROTOTYPE OF FUNCTION B TO AVOID DECLARATION ERROR"*/
void funA(int n){
    if(n>0){
        cout<<n<<" ";
        funB(n-1);
    }
}
void funB(int n){
    if(n>1){
        cout<<n<<" ";
        funA(n/2);
    }
}
int main(){
    int a=20;
    funA(20);
}