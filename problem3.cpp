#include <iostream>
using namespace std;
int main() {
    int N,A,B, ans=0, l;
    cin>>N>>A>>B;
    for (int i = 1; i <= N; i++) {
        l=i;
        int sum=0;
        while (l>0) {sum=sum+(l%10); l/=10;}
        if (sum<=B && sum>=A){ans+=i;}
    }
    cout << ans << endl;
}