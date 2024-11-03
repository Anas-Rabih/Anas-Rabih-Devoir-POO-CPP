#include <iostream>
using namespace std;

int call(){
    static int i;
    i++;
    return i;
}
int main() {

    call();
    call();
    call();
    cout << call();

    return 0;
}
