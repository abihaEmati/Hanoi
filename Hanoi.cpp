#include<iostream>
#include <math.h>
using namespace std;
int n;


void T(int p,char A, char B,char C)
{ 
  
	if(n==p)
	{
		cout<< p<<" "<<A<<" "<<C<<endl;
		return;
	}
	
	T(p+1,A,C,B);
	cout<<p<<" "<<A<<" "<<C<<endl;
	T(p+1,B,A,C);

}

print ("vvvv");
print (" mmm");

int main()
{ 
	int p=1;
	char A,B,C;
	
	
	cin>>n;
	
	
	cin>>C>>B>>A;
	cout<<pow(2,n)-1<<endl;
	
	T(p,C,B,A);

	
	return 0;
}
