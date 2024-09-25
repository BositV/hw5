#include <iostream>
using namespace std;
int main() {
    int n,N;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        cin>>N;
while (N>0){cout<<N%10<<" "; N/=10;}
        cout<<endl;
    }
}