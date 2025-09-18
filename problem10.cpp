#include <iostream>
using namespace std;
int main() {
    int x,y;
    cout<<"enter coordinates of a point: ";
    cin>>x>>y;
    if (sqrt(x*x+y*y)<=10) {
        cout<<"Point ("<<x<<","<<y<<") is in circle"<<endl;
    } else {
        cout<<"Point ("<<x<<","<<y<<") is not in circle"<<endl;
    }
    return 0;
}