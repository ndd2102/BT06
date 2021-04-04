#include <iostream>
using namespace std;

long F(int n){
    int a[1000];
    if (n == 0) return 0;
    return F(n-1)+ n*n ;
}

int main(){
    int n;
    cin >> n;
    cout << F(n);
}
//tràn bộ nhớ sau 513
