#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int N, i, j, t;
    cin >> N;
    int num[10001] = { 0, };

    for(i = 0 ; i < N ; i++) {
        cin >> t;
        num[t]++;
    }

    for(i = 1 ; i < 10001 ; i++) {
        if(num[i] != 0) {
            for(j = 0 ; j < num[i] ; j++)
                cout << i << "\n";
        }
    }
}