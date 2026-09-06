#include <iostream>
using namespace std;

int main(){
    cout << "Hello children" << endl;
    int a, count = 0;
    cin >> a;

    while (a != 0){
        count += 1;
        a = a / 10;
    }
    cout << count << endl;
    return 0;
}