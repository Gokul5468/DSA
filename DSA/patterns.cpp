/*#include<bits/stdc++.h>
using namespace std;
void Print1() {
	for(int i=0;i<5;i++){
		for (int j=0;j<=i;j++){
			cout<< '*';
		}
		cout<<endl;
	}
}
int main(){
Print1();
}*/

/*#include<bits/stdc++.h>
using namespace std;
void Print1(int n) {
	for(int i=0;i<n;i++){
		for (int j=1;j<=i;j++){
		cout<<i<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int n=6;
Print1(n);
}*/

/*#include<bits/stdc++.h>
using namespace std;
void Print1(int n) {
	for(int i=0;i<n;i++){
		for (int j=0;j<i;j++){
			cout<<i;
		}
		cout<<endl;
	}
}
int main(){
	int n = 6;
Print1(n);
}*/

/*#include<bits/stdc++.h>
using namespace std;
void Print1(int n) {
	for(int i=0;i<n;i++){
		for (int j=n;j>i;j--){
			cout<<n-j+1;
		}
		cout<<endl;
	}
}
int main(){
	int n = 6;
Print1(n);
}*/

/*#include<bits/stdc++.h>
using namespace std;
void Print1() {
	for(int i=0;i<6;i++){
		for (int j=6;j>i;j--){
			cout<< '*';
		}
		cout<<endl;
	}
}
int main(){
Print1();
}*/

/*
#include<bits/stdc++.h>
using namespace std;
void Print1(int n) {
	for(int i=0;i<n;i++){
		for (int j=0;j<n-i-1;j++){ // n-i-1 is no. of spaces before *
		
			cout<< ' ';
		}
		for(int j=0;j<2*i+1;j++){  // 2*i+1 is place where * to be printed.
			cout<<'*';
		}
		for(int j =0;j<n-i-1;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int n =6;
Print1(n);
}*/

#/*include<bits/stdc++.h>
using namespace std;
void Print1(int n) {
	for(int i=0;i<n;i++){
		for (int j=0;j<i;j++){ // n-i-1 is no. of spaces before *
		
			cout<< ' ';
		}
		for(int j=0;j<2*n-(2*i+1);j++){  // 2*i+1 is place where * to be printed.
			cout<<'*';
		}
		for(int j =0;j<i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int n =5;
Print1(n);
}*/

/*#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
	for(int i=1;i<=2*n-1;i++){
		int stars = i;
		if(i>n) {
			stars = 2*n-i;
		}
			for(int j= 1;j<=stars;j++){
				cout<<'*';
			}
			cout<<endl;
	}
}
int  main(){
	int n;
	pattern1(5);
}*/

/*#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
	int a =1;
	for(int i =0;i<n;i++){
		if(i%2==0){
		 a=1;
		}else  a=0;
		for(int j =0 ;j<=i;j++){
			cout<<a;
			a=1-a;
		}
		cout<<endl;
	}
	
}
int main(){
	int n=5;
	pattern1(n);
}*/

#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
	int space=2*(n-1);
	for(int i =1;i<=n;i++){
		for(int j =1;j<=i;j++){
		cout<<j;
	}
	for(int j= 1;j<=space;j++){
	cout<<" ";
	}
	for(int j=i;j>=1;j--){
		cout<<j;
	}
	cout<<endl;
	space-=2;
	}
}

int main(){
	int n= 4;
	pattern1(n);
}



