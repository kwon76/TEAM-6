#include <iostream>

using namespace std;

int main(){
    int n, c, cnt = 0;
    cin >> n >> c;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=1;i<=c;i++){
        for(int j=0;j<n;j++){
            if(i % arr[j] == 0){
                cnt++;
                break; 
            }
        }
    }
    cout << cnt;
    return 0;
}
