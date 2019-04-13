
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


// pattern  // 1
            // 3*2
            // 4*5*6
            // 10*9*8*7

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n=4,i,j,k,l, star=0;
//     for( k=i=1; i<=n; i++) {
//         star = i-1;
//        l = k+i-1;

//        for(j=1; j<=i;j++) {

//            if(i%2==0)cout<<l;
//            else cout<<k;
//            k++;
//            l--;
//            if(star){cout<<"*";star--;}
//        }
//        cout<<endl;


        
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// void search(char* pat, char* txt) 
// { 
//     int M = strlen(pat); 
//     int N = strlen(txt); 
//     int c = 0,k=0; 
//     for(int i=0; i<=N-M; i++) {

//         bool flag =true;
//         for(int j=0; j<M; j++) {
//             if(tolower(txt[i+j]) != tolower(pat[j])) {
//                 flag = false;
//                 break;
//             } 
//         }

//         if(flag)c++;
//     }

//     cout<<c;
// } 
  
// // Driver Code 
// int main() 
// { 
//     char txt[] = "AABAACAAD"; 
//     char pat[] = "baac"; 
//     search(pat, txt); 
//     return 0; 
// } 

                        // Binary Search

// #include<bits/stdc++.h>
// using namespace std;


// int recursiveBinarySearch(int a[],int low, int high, int num) {


//     if(low <= high) {

//         int mid = (low+high)/2;

//         if(num == a[mid])return mid;

//         if(num > a[mid]) return recursiveBinarySearch(a,mid+1, high,num);
//         else return recursiveBinarySearch(a,low, mid-1, num);
//     }
//     return -1;
// }

// int iterativeBinarySearch(int a[], int low, int high, int num) {

//     while(low <= high) {

//         int mid = (low + high)/2;

//         if(num == a[mid]) return mid;
//         if(num > a[mid])low = mid + 1;
//         else high = mid - 1;
//     }

//     return -1;
// }

// int main() {

//     int arr[] = {1,4,2,5,67,8,4,2,65,6,9,4,234,45,78,8,5,34,34,456,68,54,3,4};
//     int n = sizeof(arr)/ sizeof(arr[0]);
//     sort(arr, arr+n);
//     int num = 456;
//     cout<<recursiveBinarySearch(arr,0,n-1, num)<<endl;
//     cout<<iterativeBinarySearch(arr,0,n-1,num);
//     return 0;
// }


// STRSUB codechef

// #include<bits/stdc++.h>
// using namespace std;

// typedef long long int ll;
// int main() {

//     int n;
//     cin>>n;
//     while(n--) {

//         ll size;
//         cin>>size;
//         ll a[size], c[size];
//         // int a[4] = {1,4,2,3};
//         for(ll i=0; i<size; i++) {
//             cin>>a[i];
//             c[i] = 1;
//         }

//         for(ll i=1; i<size; i++) {
//             if(a[i] >= a[i-1]) {
//                 c[i] += c[i-1];                

//             }
//             // if(c>0)v+=c;
//         }

//         // cout<<v+sizeof(a)/sizeof(a[0])<<endl;
//         ll sum=0;
//         for(int i=0; i<size; i++){
//             sum+= c[i];
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }

// CUP CAKES
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;


// int main() {

//     int n;
//     cin>>n;
//     while(n--) {
//         ll size;
//         cin>>size;
//         ll ans = INT_MAX;
//             for(ll i=1; i<=sqrt(size); i++) {

//             if(size%i == 0) {
//                 ll s = size/i;
//                 if(ans > abs(s-i)) {
//                     ans = abs(s-i);
//                 }
//             }
//         }
//         cout<<ans<<"\n";

        
        
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        cout<<s<<endl;
    }
}