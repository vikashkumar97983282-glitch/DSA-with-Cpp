#include <iostream>
using namespace std;
const int N = 1e7+10;
int arr[N];

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin >> a[i];
        arr[a[i]]++;
        cout << arr[a[i]] << endl;
    }
    while(n--){
        int c;
        cin >>c;

        cout<< arr[c];

    }


}