#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void hanoi(int start, int aux, int dest, int n){
    if(n == 1) printf("%d %d\n", start, dest); //base case
    else{
        hanoi(start, dest, aux, n-1);
        printf("%d %d\n", start, dest);
        hanoi(aux, start, dest, n-1);
    }
}

int main(){
    
    int n = 0;
    cin >> n;

    string s = to_string(pow(2, n));
    int idx = s.find('.');
    s = s.substr(0, idx);
    s[s.length()-1] -= 1;

    cout << s << "\n";
    
    if(n <= 20)
        hanoi(1, 2, 3, n);

    return 0;
}

