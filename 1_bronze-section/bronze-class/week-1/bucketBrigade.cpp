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
    char farm[10][10];
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            char t; cin >> t;
            farm[i][j] = t;
        }
    }

    // printing the array: 

    // for(int i=0; i<10; i++){
    //     for(int j=0; j<10; j++){
    //         cout << farm[i][j];
    //     }
    //     cout << endl;
    // }

    int lakeRow, lakeCol, barnRow, barnCol;
    int rockRow, rockCol;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(farm[i][j] == 'B') barnRow = i, barnCol = j;
            if(farm[i][j] == 'L') lakeRow = i, lakeCol = j;
            if(farm[i][j] == 'R') rockRow = i, rockCol = j;
        }
    }
    int colCount = abs(lakeCol-barnCol);
    int rowCount = abs(barnRow-lakeRow);

    int ans = colCount + rowCount - 1;

    if(((rockRow >= barnRow && rockRow <= lakeRow) && rockCol == barnCol && rockCol == lakeCol)||
       ((rockRow <= barnRow && rockRow >= lakeRow) && rockCol == barnCol && rockCol == lakeCol)){
            ans += 2;
    }
    else if(((rockCol >= barnCol && rockCol <= lakeCol) && rockRow == barnRow && rockRow == lakeRow)||
       ((rockCol <= barnCol && rockCol >= lakeCol) && rockRow == barnRow && rockRow == lakeRow)){
            ans += 2;
       }

    prt(ans);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    //int t; cin >> t;
    int t = 1;
    while(t--) solve();
    // while(t--) codeDebug();

    return 0;
}