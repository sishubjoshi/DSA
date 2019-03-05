#include<iostream>
#include<list>
using namespace std;
int main() {


    list<int> gg;

    gg.push_back(1);
    gg.push_back(1);
    gg.push_back(1);
    gg.push_back(1);
    gg.push_back(1);
    gg.push_front(10);

    // for(auto it: gg ) {
    //     cout<<it<<" ";
    // }
    // cout << endl;

    list<int> :: iterator i = gg.begin();

    ++i;
    gg.insert(i, 100);

    // for(auto it : gg) {
    //     cout<<it<<" ";
    // }

    for( list<int> :: iterator it = gg.begin(); it != gg.end();) {
        if(*it == 100) {
            it = gg.erase(it );
        } 
            it++;
        
    }

    for(auto it : gg) {
        cout<<it<<" ";
    }



    
    return 0;
}