#include <iostream>
#include <cstring> 
using namespace std;
int main() {
    int capacity= 5; 
    int count= 0;    
    int* arr= new int[capacity];  

    cout<<"Enter integers to add to the array (enter -1 to stop):"<<endl;
    while(true){
        int value;
        cin>>value;
        if(value==-1) {
        	break;
		}

        if (count==5) { 
            int newCapacity = 10;  
            int* newArr= new int[newCapacity];  
            memcpy(newArr,arr,count*sizeof(int));  
            delete[] arr;
            arr= newArr;
            capacity= newCapacity;

            cout<<"Array resized to: "<<capacity<<endl;
        }

        arr[count++]=value;
    }
    if (count<capacity) {
        int* finalArr = new int[count];  
        memcpy(finalArr, arr, count * sizeof(int));

        delete[] arr; 
        arr= finalArr; 
        capacity= count;  

        cout<<"Final array resized to: "<<capacity<<endl;
    }

    cout<<"Stored elements: ";
    for (int i=0;i<capacity;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr; 
    return 0;
}
