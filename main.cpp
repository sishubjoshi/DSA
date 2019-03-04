
// LECANDY
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     scanf("%d", &t);
//     while(t--) {
//         int n, c;
//         scanf("%d%d", &n, &c);
//         int sum=0, temp;
//         for(int i=0; i<n; i++) {
//             scanf("%d", &temp);
//             sum+= temp;
//         }

//         (sum < c? printf("Yes\n"):printf("No\n"));
//     }
// }

// 														feb 2019
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
//     // cin>>t;
//     scanf("%d", &t);
// 	while(t--) {
// 	    long long int n,k, x=0,y=0;
// 	    long long int  a,b;
// 	    scanf("%lld%lld%lld%lld", &n,&a,&b,&k);
//         // cin>>n>>a>>b>>k;
// 	    for(int i=1; i<n; i++) {
// 	        if(i%a==0)x++;
// 	        else if(i%b==0)y++;
// 	    }
// 	    ((x+y) >= k? printf("Win\n"):printf("Lose\n"));
// 	}
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;

//     // memset(houses, true, 101);
//     while(n--) {
//         bool houses[101];

//         for(int i=0; i<100; i++)houses[i] = true;
        
//         int policeHouses, speed, minutes;

//         cin>>policeHouses>>speed>>minutes;

//         int police[policeHouses];

//         for(int i=0; i < policeHouses; i++) cin>>police[i];

//         // cout<<policeHouses<<speed<<minutes;
//         for(int i=0; i<policeHouses; i++) {

//             int l = police[i] - (speed*minutes);

//             if(l < 0) l = 1;

//             int r = police[i] + (speed*minutes);

//             if(r > 100) r = 100;

//             for(int i=l; i <= r; i++) {
//                 if(houses[i]) {
//                     houses[i] = false;
//                 }
//             }
//         }

//         int count = 0;
//         for(int i=0; i<101; i++) {

//             if(houses[i]) count++;
//             // cout<<i<<" ";
//         } 

//         cout<<count<<"\n";
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

typedef  long long int lli;
int main() {
    int n;
    cin>>n;
    while(n--) {
        lli N;
        int d;
        cin>>N>>d;

        lli x = N, mod = 0;
        while(x>0) {
            mod += x%10
            x = x/10;
            x = x*10 + d;
            if(x < N) {
                N = x;
            }

        }

        cout<<N;

    }
}