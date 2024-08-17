#include <iostream>
using namespace std;

int main() {
    
    int a,b,c,t;

    cin >> t ;
    
    for(int i = 0; i < t ; i++) {
        
        cin >> a >> b >> c;

        if (a < b & b < c) {
            cout << "STAIR";
        }
        else if (a < b & b > c) {
            cout << "PEAK";
        }
        else{
            cout << "NONE";
        }

    }
    
    return 0;
}
