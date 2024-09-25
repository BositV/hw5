#include <iostream>
using namespace std;
int main() {
int N,n=1, ans;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        if (n%3==0 || n%10==3){i--;}
        else {ans=n;}
        n++;
    }

    cout<<ans<<endl;
}