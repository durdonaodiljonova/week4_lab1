#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter the speed of a vehicle: ";
    cin>>x;
    if (x<20) {
        cout<<"too slow"<<endl;
    } else if (x>80) {
        cout<<"too fast"<<endl;
    } else {
        cout<<"just right"<<endl;
    }
    return 0;
}