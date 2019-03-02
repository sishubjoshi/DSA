#include<bits/stdc++.h>
using namespace std;

string findDay(int d, int m, int y){
    // cout<<d<<m<<y<<endl;
    int yc, p1, p2, ed;

    yc = y-1;
    yc %= 400;
    p2 = yc % 100;
    p1 = yc - p2;

    ed = (p1/100)*5 + p2 + (p2/4);
    
    int month[13] = {0, 3, 0, 3, 2, 3, 2, 3, 3, 2, 3, 2, 3};

    // cout<<"ed:"<<ed<<" p1:"<<p1<<" p2:"<<p2<<" yc:"<<yc<<endl;
    for(int i=1; i<m; i++) {
        ed += month[i];
    }

    ed += d;
    ed %= 7;
        // cout<<"ed:"<<ed<<" p1:"<<p1<<" p2:"<<p2<<" yc:"<<yc<<endl;

    // cout<<ed;
    string days[] {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
    return days[ed];
}


int main() {
    int d, m, y;
    // cin>>d>>m>>y;
    

    cout<<"Day: "<<findDay(27, 2, 2019);
    return 0;
}