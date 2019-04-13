// record of 20 structures.
// what is file, filehandling? why to use files and various I/O functions of file.

#include <iostream>
using namespace std;
struct Students {
    string name;
    int roll;
}s[12];


int main() {

    // Students arr[4] = new Students;

    string n[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l"};
    int r[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=0; i<sizeof(r)/sizeof(r[0]); i++) {

        s[i].name = n[i];
        s[i].roll = r[i];
    }


    for(auto x : s) {
        cout<<x.name<<" "<<x.roll<<endl;
    }

}