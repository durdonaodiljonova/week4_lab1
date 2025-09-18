#include <iostream>
using namespace std;
int main() {
    int x,y;
    cout<<"enter two integers: ";
    cin>>x>>y;
    if (x%y==0) {
        cout<<x<<" is divisible by "<<y<<endl;
    } else {
        cout<<x<<" is not divisible by "<<y<<endl;
    }
    return 0;
}