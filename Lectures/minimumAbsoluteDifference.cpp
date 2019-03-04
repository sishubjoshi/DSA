
// 1. Sort the array
// 2. set the min = abs(a[0] - a[1])
// 3. Iterate through array and calculate the difference of consecutive array elements and update the min value.

// Question: Hackerrank(https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem)


int minimumAbsoluteDifference(vector<int> v) {
    
    sort(v.begin(), v.end());

    // sort(arr, arr+n);    If you are using arrays then use this       

    int min = abs(v[0]-v[1]);
    for(int i=1; i<v.size()-1; i++) {
        if(abs(v[i] - v[i+1]) < min ) {
            min = abs(v[i] - v[i+1]);
        }
    }

    return min;
}