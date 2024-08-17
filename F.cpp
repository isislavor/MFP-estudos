#include <iostream>
using namespace std;

const int MAX_SIZE = 1000;
int num[MAX_SIZE];

void solve() {
    int n, k;
    cin >> n >> k;

    int blog = n - 1; 
    int jishi = blog; 

    int N = blog - k; // Renomeado de "N" para "passos_restantes"

    // Inicialização do array
    for (int i = 0; i < n; i++) {
        num[i] = i + 1;
    }

    while (N--) {
        while (jishi--) {
            int temp = num[blog - 1];
            num[blog - 1] = num[blog];
            num[blog] = temp;
            blog--;
        }
        blog = n - 1; // Reiniciando o "blog"
        jishi = N + k; // Ajustando o valor de "jishi"
    }

    // Imprimindo o resultado
    for (int i = 0; i < n; i++) {
        cout << num[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}