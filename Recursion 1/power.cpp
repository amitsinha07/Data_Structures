#include <iostream>
using namespace std;

int power(int n, int x){
    if(x == 0){
        return 1;
    }
    int prev = power(n, x-1);
    return n*prev;
}

int main(){
    int n,x;
    cin>>n>>x;

    cout<<power(n, x);
}