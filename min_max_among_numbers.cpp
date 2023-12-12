#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout <<  "Enter the number of terms " ;
    cin >> n;
    int max_so_far = INT_MIN;
    int min_so_far = INT_MAX;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num > max_so_far){
            max_so_far = num;
        }
        if(num < min_so_far){
            min_so_far = num;
        }
    }
    cout << "The largest number of the series is " << max_so_far << "\n";
    cout << "The smallest number of the series is " << min_so_far;
    return 0;
}