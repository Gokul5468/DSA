/*// selection sort..
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){
	for(int i =0;i<=n-2;i++){
		int min=i;
		for(int j=i;j<=n-1;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		swap(arr[i],arr[min]);
		}
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	}
int main(){
	int n;
	int arr[n];
	cin>>n;
	for(int i =0;i<n;i++)cin>>arr[i];
	selectionsort(arr,n);
	return 0;
}

// bubble sort..
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<=i-1;j++){
			if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}
}
		for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	 cin>>arr[i];
}
	bubble_sort(arr,n);
	return 0;
}*/

// insertion sort..
/*#include<bits/stdc++.h>
using namespace std;
void insert_sort(int arr[],int n){
	for(int i =0;i<=n-1;i++){
		int j=i;
		while(j>0 && arr[j-1] >arr[j]){
			swap(arr[j-1],arr[j]);
			j--;
		}

	}
 }
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	insert_sort(arr,n);
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}*/

//merge sort.
//#include<bits/stdc++.h>
/*#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    int left = low; // starting index of left half of arr
    int right = mid + 1; // starting index of right half of arr
    vector<int> temp; // temporary array

    // storing elements in the temporary array in a sorted manner
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergesort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergesort(arr, low, mid); // left half
    mergesort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high); // merging sorted halves
}

int main() {
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = arr.size();
    cout << "Before sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergesort(arr, 0, n - 1);

    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}*/

//Quick sort..
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();
    cout << "Before Using quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr = quickSort(arr);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}



