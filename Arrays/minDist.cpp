long long minDist(long long arr[], long long n, long long x, long long y)
{  
    //add code here.
    int c=0,v=0;
    
    
    int min=n, tempx[n],tempy[n];
    for(int i=0; i<n; i++) {

        if(arr[i] == x){
            tempx[c]=i;
            c++;
            }
        else if(arr[i] == y){
            tempy[v]=i;
            v++;
            }
        
    }
        if(c == 0 || v == 0)return -1;
        
        for(int i=0; i<c;i++) {

            for(int j=0;j<v; j++) {

                if(abs(tempx[i] - tempy[j]) < min) {
                    
                    min = abs(tempx[i] - tempy[j]);
                }
            }
        }

    
  
    
    return min;
}