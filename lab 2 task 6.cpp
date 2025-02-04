#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct Subject {
    string subjectName;
};
struct Student {
    int id;  
    vector<Subject> subjects; 
};

int main() {
    int N;
    cout<<"Enter the number of students: ";
    cin>>N;
    vector<Student> students(N);
    for (int i=0;i<N;++i) {
        cout<<"Enter ID for student "<<i+1<<": ";
        cin>>students[i].id;
        int subjectCount;
        cout<<"Enter the number of subjects for student "<<i+1<<": ";
        cin>>subjectCount;

        for (int j=0;j<subjectCount;++j) {
            string subjectName;
            cout<<"Enter subject "<<j+1<<" for student "<<i+1<<": ";
            cin >> subjectName;

            Subject subject;
            subject.subjectName = subjectName;
            students[i].subjects.push_back(subject);
        }
    }
    cout<<"\nStudent Details:\n";
    for (int i=0;i<N;++i) {
        cout<<"Student ID: "<<students[i].id<<endl;
        cout<<"Subjects:\n";
        for (const Subject& subject : students[i].subjects) {
            cout<< "- " <<subject.subjectName<<endl;
        }
        cout<<endl;
    }
    return 0;
}
