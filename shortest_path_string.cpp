// Given a string of Directions as E, W, N, S we have to find the shortest path from starting point (0, 0) to the new coordinate

#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int displacement = 0;
    char ch;
    cout << "Enter the string of directions -> ";
    ch = cin.get();
    int x = 0, y = 0;
    while(ch != '\n'){
        if(ch == 'N' or ch == 'n'){
            y++;
        }
        if(ch == 'S' or ch == 's'){
            y--;
        }
        if(ch == 'E' or ch == 'e'){
            x++;
        }
        if(ch == 'W' or ch == 'w'){
            x--;
        }
        ch = cin.get();
    }
    displacement = sqrt(x*x + y*y);
    cout << "The shortest distance from (0, 0) to the new position is " << displacement << endl;
    return 0;
}