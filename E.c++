#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> v(n + 1);
        
        for(int i = 1;i <= n;i++)
            cin >> v[i];
        
        sort(v.begin(),v.end());
        
        int m;
        if(n % 2 == 0) m = n / 2;
        else m = (n / 2) + 1;
        
        int med_at = v[m];
        int r = 0;
        
        for(int i = m;i <= n;i++)
            if(med_at == v[i]) r++;
            else break;
        
        cout << r << "\n";
    }

    return 0;
}