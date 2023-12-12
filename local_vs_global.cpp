// The difference between a local variable and global variable "use of score resoulution operator ::"
#include<iostream>
using namespace std;

int x = 100;
int main(){
    int x = 10;
    cout << "The local varial x has value " << x << endl;
    cout << "The global variable x has value " << ::x;
}

