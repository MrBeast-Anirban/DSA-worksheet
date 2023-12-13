/* Program to build a right triangle star pattern that is facing towards left
Enter the number of Rows -> 5
    *
   **
  ***
 ****
*****
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of Rows -> ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n - i; j++){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}