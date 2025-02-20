/*// count number of digits..
#include <bits/stdc++.h> 
using namespace std;
int countDigit(long long x) {
    int count =0;
    while(x>0){
        int last = x%10;
        count = count+1;
        x=x/10;
    }
    return count;
}
// time complextiy = log10(n);

// reverse number..
#include<iostream>
using namespace std;

int main() {
	int x,res;
    int count =0;
    cin>>x;
    while(x>0){
    int res = x%10;
    count = count *10+res;
    x=x/10;
    }
    cout<<count;
	
}

// palindrome number ..
#include<iostream>
using namespace std;

int main() {
	int x,res;
	int temp = x;
    int count =0;
    cin>>x;
    while(x>0){
    int res = x%10;
    count = count *10+res;
    x=x/10;
    }
   if( x== count) count<<"true";
   else cout<<" false";
	
}*/

// gcd and lcm
#include<bits/stdc++.h>
using namespace std;
 int gcd(int a, int b){
	int c= min(a,b);
	while(c>0){
		if(a%c ==0&& b%c==0){
			break;
		}
		c--;
	}
	return c;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
	return 0;
}



