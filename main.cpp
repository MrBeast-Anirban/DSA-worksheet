/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int countbinary(int n){
    //base case
    if(n == 1){
        return 2;
    }
    if(n == 0){
        return 1;
    }
    //recursive case
    return countbinary(n-1) + countbinary(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << countbinary(n);
    return 0;
}
