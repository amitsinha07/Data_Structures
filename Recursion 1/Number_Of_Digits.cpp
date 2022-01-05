#include <iostream>
using namespace std;

int NumberOfDigits(int n){

    if(n==0){
        return 0;
    }
    
    return NumberOfDigits(n/10) + 1;


}

int main(){
    int n;
    cin>>n;

    cout<<NumberOfDigits(n);
}