#include<iostream>
#define max 20
using namespace std;
void display( int a[max],int n){
	cout<<"sort\n";
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<"\n";
}
void bubble_sort(int a[max],int n)
{ 
int check=0;// check if the array is sorted or not 
for (int i=0;i<n;i++){
	
	check=0;
	cout<<"pass:\t"<<i<<"\n";
for(int k=1;k<n;k++){
	
		if(a[k-1]>a[k]){
			swap(a[k-1],a[k]);
			check=1;
			display(a,n);
		}
	
	}
	if(check==0)
	break;
		
	
} 
}

int main( )
{
	int a[max],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bubble_sort(a, n);
	cout<<"-------------------------------------------\nbubble sorting:\n\n";
	display(a,n);
}
