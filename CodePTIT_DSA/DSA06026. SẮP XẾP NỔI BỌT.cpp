#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 1; i < n; i++)
    {
        bool check = true;
        for(int j = 0; j < n - i; j++)
        {
            if(a[j] > a[j + 1]) 
            {
                swap(a[j + 1], a[j]);
                check = false;
            }
        }
        if(check) break;

        cout << "Buoc " << i << ": ";
        for(auto &x : a) cout << x << " ";
        cout << endl;
    }
}