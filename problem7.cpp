#include <iostream>
using namespace std;
int main() {
    int x,y,z;
    cout<<"enter angles of triangle: ";
    cin>>x>>y>>z;
    if (x+y+z==180) {
        cout<<"The triangle is valid"<<endl;
    } else {
        cout<<"The triangle is not valid"<<endl;
    }
    return 0;
}