#include<bits/stdc++.h>
using namespace std;

struct studentDetails {

    int roll, marks;
    char name[30];
};


void readStudents(studentDetails *s) {
    char name[30];
    cin>>s->roll;
    cin>>name;
    strcpy(s->name, name);
    cin>>s->marks;
}

void displayStudents(studentDetails *s) {

    cout<<s->roll<<" "<<s->name<<" "<<s->marks<<endl;
}
int main() {

    studentDetails *student;
    student = (studentDetails*)malloc(sizeof(studentDetails)*3);

    for(int i=0; i<3; i++) {

        readStudents(student);
        student++;
    }
    
    for(int i=0; i<3; i++) {
        displayStudents(&student[i]);
    }

    cout<<sizeof(student);
    return 0;
}