#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Person {
    int id;
    string name;
};

int main() {
    int N;
    cout<<"Enter the number of structures: ";
    cin>>N;
    vector<Person> people(N);
    
    for (int i=0;i<N;++i) {
        cout<<"Enter ID and Name for person "<<i+1<<": ";
        cin>>people[i].id >> people[i].name;
    }
    for (int i=0;i<N-1;++i) {
        for (int j=0;j<N-i-1;++j) {
            if (people[j].id> people[j+1].id) { //bubble sort
                Person temp= people[j];
                people[j]= people[j+1];
                people[j+1]= temp;
            }
        }
    }

    cout << "\nSorted by ID:\n";
    for (int i=0;i<N;++i) {
        cout<<"ID: "<<people[i].id << ", Name: "<<people[i].name<<endl;
    }
    for (int i=0;i<N-1;++i) {
        for (int j=0;j<N-i-1;++j) {
            if (people[j].name[0] > people[j+1].name[0]){
                Person temp= people[j];
                people[j]= people[j+1];
                people[j+1]= temp;
            }
        }
    }

    cout<<"Sorted by first character of Name:\n";
    for (int i=0;i<N;++i) {
        cout<<"ID: "<<people[i].id<<", Name: "<<people[i].name<<endl;
    }
    return 0;
}

