#include<bits/stdc++.h>
using namespace std;

int main () {
    
    int estacoes[21] = {0,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100};
    
    int n;
    cin >> n;
    
    int estacaoMaisProxima = estacoes[0];
    
    for(int i = 1; i < 21; i++) {
        if(abs(estacoes[i] - n) < abs(estacaoMaisProxima - n)) {
            estacaoMaisProxima = estacoes[i];
        }
    }
    
     cout << estacaoMaisProxima << endl;
    
    return 0;
}