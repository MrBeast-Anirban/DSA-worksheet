#include <iostream>
using namespace std;

char keyword[][10] = {"","", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void generate_words(char *in, char *out, int i, int j){
    //base case
    if(in[i] == '\0'){
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    //recursive case
    int digit = in[i] - '0';
    if(digit == 1 || digit == 0){
        generate_words(in, out, i+1, j+1);
    }
    for(int k = 0; keyword[digit][k] != '\0'; k++){
        out[j] = keyword[digit][k];
        //fill the remaining part recursively
        generate_words(in, out, i+1, j+1);
    }
    return;
}
int main(){
    char in[100];
    cin >> in;

    char out[100];
    generate_words(in, out, 0, 0);
    return 0;
}