// link: https://usaco.org/index.php?page=viewproblem2&cpid=663
#include<bits/stdc++.h>
using namespace std;

#define input freopen("in.txt", "r", stdin)
#define debugIn freopen("out.txt", "r", stdin)
#define pr(x) cout << #x << " = " << x << endl
#define prt(x) cout << x << endl
#define endl "\n"
#define hi cout << "hi" << endl
#define br cout << endl
//#define int long long
//#define int unsigned long long

void solve(){
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    int a1, b1, a2, b2; cin >> a1 >> b1 >> a2 >> b2;

    int squareX = abs(min(x1, a1)-max(x2, a2));
    int squareY = abs(min(b1, y1)-max(y2, b2));    

    if(squareX > squareY) prt(squareX*squareX);
    else prt(squareY*squareY);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();

    return 0;
}