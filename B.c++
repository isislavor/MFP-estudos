#include<iostream>
#include<set>
using namespace std;

int main () {
    
    int n;
    cin >> n;
    
    set<int> valoresDistintos;
    
    for(int i=0; i < n; i++){
        int x;
        cin >> x;
        valoresDistintos.insert(x);
    }
    cout << valoresDistintos.size() << endl;
    
    return 0;
}