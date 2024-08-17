#include<bits/stdc++.h>
using namespace std;

int main () {
    
    int tamanho;
    string S;
    
    cin >> S;
    tamanho = strlen(S.c_str());
    
    sort(S.begin(), S.end());
    for (const auto& letra : S) {
        cout << letra;
    }
    
    
    return 0;
}