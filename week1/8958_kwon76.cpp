#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        string str;
        int score = 0, tmp = 0;
        cin >> str;
        for(auto a : str){
            if(a=='O'){
                tmp++;
                score+=tmp;
            }
            else{
                tmp=0;
            }
        }
        cout << score << '\n';
    }
}
