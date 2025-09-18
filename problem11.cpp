#include <iostream>
using namespace std;
int main() {
    double x,y;
    cout<<"Enter weight and price for package 1: ";
    cin>>x>>y;
    double a,b;
    cout<<"Enter weight and price for package 2: ";
    cin>>a>>b;
    if ((x/y)<(a/b)) {
        cout<<"Package 2 has a better price"<<endl;
    } else if (x/y==a/b) {
        cout<<"Two packages have the same price"<<endl;
    } else {
        cout<<"Package 1 has a better price"<<endl;
    }
    return 0;
}