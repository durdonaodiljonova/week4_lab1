#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char x;
    cout<<"enter character: ";
    cin>>x;
    if (isupper(x)) {
        cout<<"Uppercase alphabet"<<endl;
    } else if (islower(x)) {
        cout<<"Lowercase alphabet"<<endl;
    } else {
        cout<<"It is not an alphabet";
    }
    return 0;
}