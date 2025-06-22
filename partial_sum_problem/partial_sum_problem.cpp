#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin >> n;
    vector<int> A(n);
    for(auto &x: A) cin >> x;
    cin >> k;

    

    for(int bit = 0; bit < (1 << n); bit++){
        int sum = 0;
        for(int i = 0; i < n;i++){
            if(bit & (1 << i)){
                sum += A.at(i);
            }
        }

        if(sum == k){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}

