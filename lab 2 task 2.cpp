#include <iostream>
using namespace std;
void *add(void*arr,int n){
	int *Arr=(int*)arr;
	for(int i=0;i<5;i++){
			Arr[i]+=n;
	}
	return (void*)Arr;
}
int main(){
	int n=3; //number to be added
	int arr[5]={1,2,3,4,5};
	cout<<"Original array"<<endl;
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	void *result=add((void*)arr,n);
	int*Result=(int*)result;
	cout<<"New array"<<endl;
	for(int i=0;i<5;i++){
		cout<<Result[i]<<" ";
	}
	return 0;
}