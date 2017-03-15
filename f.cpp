#include <unistd.h>
#include <iostream>
#define N 8
using namespace std;

int counter=2;
void getFib(int n);
int Fsum(int f1,int f2,int n);

int main(){//startMain
	cout <<"N="<<N<<endl;
	cout<<1<<"\n"<<1<<"\n";
	getFib(N);
}//EndMain

void getFib(int n){//intializing Fsum function
	Fsum(1,1,n);
}//EndGetFib

int Fsum(int f1,int f2,int n){//getting fib
	pid_t theFork;
	int nextTerm;//for adding f1,f2
	nextTerm=f1+f2;
	f1=f2;//swapping :D
	f2=nextTerm;//swapping :D
	cout <<f2<<"\n";
	counter++;
	if(counter>=n){return 0;}
	else{
		theFork=fork();
		if (theFork<0){cout <<"Error Creating Fork\n";}
		else if (theFork==0){return Fsum(f1,f2,n);}
	}//EndElse
}//EndFSum




