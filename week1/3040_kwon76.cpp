#include <iostream>

using namespace std;

int main(){
    int arr[9];
    int sum = 0, a = 0, b = 0;
    bool ans = false;

    for(int i=0; i<9; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=8;j++){
            if((sum-(arr[i]+arr[j]))==100){
                a=arr[i];
                b=arr[j];
                ans = true;
                break;
            }
        }
        if(ans) break;
    }

    for(auto i : arr){
        if((i==a)||(i==b))
            continue;    
        cout << i << '\n';
    }
}
