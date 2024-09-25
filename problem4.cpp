#include <iostream>
using namespace std;
int main() {
    int n,x,floor=1;
    cin>>n>>x;
    n-=2;
    while (n>0){n-=x; floor++;}
    cout<<floor;
}