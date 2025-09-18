#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"enter the year: ";
    cin>>x;
    if (x%100==0 and x%400==0) {
        cout<<x<<" is a leap year"<<endl;
    } else if (x%100!=0 and x%4==0) {
        cout<<x<<" is a leap year"<<endl;
    } else {
        cout<<x<<" is not a leap year"<<endl;
    }
    return 0;
}