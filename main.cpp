
// #include<bits/stdc++.h>
// using namespace std;

// int binarySearch(int a[], int n, int item) {
//     int low = 0;
//     int high = n-1;
//     item = 6;
//     while(low <= high) {
//         int mid = (low + high)/2;
//         if(a[mid] == item) return mid;
//         else if(a[mid] < item) low = mid + 1;
//         else high = mid - 1;
//     }
//     return -1;
// }
// int main() {
//     int arr[10] ={1,2,3,4,5,6,7,8,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     // display
//     for(int c: arr) cout<<c<<" ";

//     // insertion

//     // int pos, item = 100;
//     // cin>>pos;
//     // for(int i = n-1; i >= pos; i--) {
//     //     arr[i+1] = arr[i];
//     // }
//     // arr[pos] = item;
//     // n++;
//     // insertion

//     // // deletion
//     // int pos = 3;
//     // for(int i=pos; i<n; i++) arr[i] = arr[i+1];

//     // n--;
//     // // deletion
//     // cout<<"array after element been deleted";
//     // for(int i=0; i<n; i++) cout<<arr[i]<<" ";(

//     // binary search
//     int result = binarySearch(arr, n, 6);
//     (result ? cout<<"element found at "<<result+1<<"\n":cout<<"not found");

// }


// #include <cstdio>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n,m;
//     scanf("%d", &n);
//     while(n--) {
//         scanf("%d", &m);
//         int arr[m];
//         int size = sizeof(arr)/ sizeof(arr[0]);
//         for(int i=0; i<size; i++) scanf("%d", &arr[i]);

//         sort(arr, arr+size);
//         printf("%d\n", arr[0] + arr[1] );
//     }

// }
// Alternate sort
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     while(n--) {
//         int size;
//         cin>>size;
//         long long int arr[size];
//         for(int i=0; i<size; i++) cin>>arr[i];
//         for(int i=0; i<size-1; i++) {
//             if(i%2==0) {
//                 if(arr[i] >= arr[i+1]) {
//                     int temp = arr[i+1];
//                     arr[i+1] = arr[i];
//                     arr[i] = temp;
//                 }
//             } else {
//                 if(arr[i] <= arr[i+1]) {
//                     int temp = arr[i+1];
//                     arr[i+1] = arr[i];
//                     arr[i] = temp;
//                 }
//             }
//         }

//         for(int x:arr) cout<<x<<" ";
//         cout<<"\n";
//     }
// }

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


#include <iostream>
using namespace std;
int main() {
	int a[] = {1,0,2,0,4,0,0,5,6,7};
	int j=10-1;
	for(int i=0; i<j-1; i++) {
		if(a[i] == 0) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			j--;
	
		}
		// cout<<sizeof(a)/sizeof(a[0]);
	}
			for(int x:a)cout<<x<<" ";

	return 0;
}