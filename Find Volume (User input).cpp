#include<iostream>
#include<string>
#include<windows.h>
using namespace std;

int main(){
	int w, l, d, r;
	cout<<"Enter the width: "<< endl;
	cin>> w;
	cout<<"Enter the length: "<< endl;
	cin>> l;
	cout<<"Enter the depth: "<< endl;
	cin>> d;
	r = w * l * d;
	cout<<"The volume is: "<< r<< endl;
	
	system("PAUSE");
}
