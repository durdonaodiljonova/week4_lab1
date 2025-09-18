#include <iostream>
using namespace std;
int main() {
    int x,y,z;
    cout<<"enter three integers: ";
    cin>>x>>y>>z;
    if (x>y and x>z) {
        cout<<x<<" is the largest"<<endl;
    } else if (y>x and y>z) {
        cout<<y<<" is the largest"<<endl;
    } else if (z>x and z>y) {
        cout<<z<<" is the largest"<<endl;
    }
    return 0;

}