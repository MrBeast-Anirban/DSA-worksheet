//Find the square root of a number 'n' given
#include <iostream>
using namespace std;

int main(){
    float answer = 0, inc = 1.0;
    int p, n;
    cin >> n >> p;
    for(int times = 0; times <= p; times++){
        while (answer*answer <= n){
            answer = answer + inc;
        }
        answer = answer - inc;
        inc = inc / 10;
    }
    cout << "The square root of " << n << " is " << answer;
}