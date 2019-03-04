
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


