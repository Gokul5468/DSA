//pairs
/*#include<bits/stdc++.h>
using namespace std;
void explainPair(){
	int p;
pair<int,int> p={1,3};
cout<<p.first<<" "<<p.second;
pair<int,pair<int,int>> p={1,{1,3}};
cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;
pair<int,int>arr[] { { 1,2},{2,5},{5,1}};
cout<<arr[1].second;
}
int main(){
	int p;
	explainPair()
}*/

//Vector..
vector<int>v;
v.push_back(1);
v.emplace_back(2);
vector<pair<int,int>vec; // to add pair in vector..
v.push_back({1,2});
v.emplace_back(1,2);//no need of using {} to add in vector.
vector< int >v(5,100);//5 is size instance of 100's{100,100,100,100,100}
vector<int>v(5); //only size of 5 with garbage value depends on complier..
vector<int>v1(5,20);
vector<int>v2(v1);//copying v1 vector into v2 ..

//iterators.. == it points to memory address..
//example -> v ={ 20,10,25,6,7}
vector<int>::iterator it = v.begin(); //20
it++;//increment by 1
cout<<*(it)<<" ";// accecc a element in memory..
it=it+2; // increment by 2
cout<<*(it)<<" ";
//example -> v={10,20,30,40}
vector<int>::iterator it = v.end();// it will locate at the after the last element in memory.->40
//these are not used more..rend,rbegin..
vector<int>::iterator it = v.rend(); //reverse end-> right after 10.reverse order.
//if it++ is done in rbegin it will be go to 30 .. reverse order..
vector<int>::iterator it = v.rbegin();

cout<<v[0]<<" "<<v.at(0);
cout<<v.back()<<" ";// {10,20,30} element which is at 30
// print vector using iterator..
for(vector<int>iterator it = v.begin(); it != v.end();it++){
	cout<<*(it)<<" ";
}
// we use auto it will automatically defines the data type  to vector<int>::iterator 
// int a=5; is also can be write in auto a = 5;
for(auto it = v.begin(); it != v.end();it++){
	cout<<*(it)<<" ";
}
for(auto it:v){
	cout<<it<<" ";//{10,20,30} it will iterat one by one..
}
//earse..
//{10,20,12,23,35}
v.erase(v.begin()+1);

//{10,20,12,23,35}
v.erase(v.begin()+2,v.begin()+4);//{10,20,23}

//insert func..
vector<int>v(2,100);//{100,100}
v.insert(v.begin(),300);//{300,100,100}
v.insert(v.begin()+1,2,10);//{300,10,10,100,100}

//{10,20}
cout<<v.size();//2 how many elements are there..

//{10,20}
v.pop_back();// delete the last element..

//v1->{10,20}
//v2->{30,40}
v1.swap(v2);//v1->{30,40},v2->{10,20}
 v.clear();//erases the entire vector.
 
 cout<<v.empty();//minimum of 1 element it will say 1 false, if empty 0 truee..
}

//List..dynamic in nature..
void explainlist(){
	list<int>ls;
	ls.push_back(2);//2
	ls.emplace_back(4);//{2,4}
	ls.push_front(5);//{5,2,4}
	ls._emplace_front();//{2,4};
}

// deque is same as vector and list..

// stack
//LIFO,, indexing is not allowing..
// main func .. are push,pop,top..
//top is to print top element in stack.
//O(1) .constant time..

//-> queue..FIFO..


//set container..-> stores in sorted order and unique 
void explainSet(){
	set<int>st;
	st.insert(1);
	st.emplace(2);
	st.insert(2);
	st.insert(4);
	st.insert(3); //{1,2,3,4}
	
	//functionality of inssert in vector..
	// can be used also,that only incrases..
	//efficiency.
	//{1,2,3,4,5}
	auto it = st .find(3); // returns iterator which points to adress
	//{1,2,3,4,5}
	auto it = st.find(6);// element is not in set it returns st.end();
	//{1,4,5}
	st.erase(5);//erase 5 // takes log time
	int cnt = st.count(1);//
	auto it = st.find(3);
	st.erase(it);//it takes constant time..
     	
}
//multiset()->only sorting but if you earse a one it will earse all duplicate values

