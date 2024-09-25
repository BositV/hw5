#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    for (int i =n+1; i > 0; i--) {
        for (int j=1; j < i; j++) {cout <<j;}
        for (int space=0; space<count; space++){cout<<" ";}
        for (int l= i-1; l>= 1; l--) {cout <<l;}
        cout<<endl;
        count+=2;
}
    cout<<endl;

}
