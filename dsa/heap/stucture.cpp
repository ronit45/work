#include<bits/stdc++.h>
using namespace std;
class heap{
    public:
     int arr[100];
     int size;
    
    heap(){
        arr[0]=-1;
        size = 0;
    }

    
    void insert(int val){
        size = size+1;
        arr[size]=val;
        int index= size;
        

        while(index >1){
            int parent = size/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void deletefromheap(){
        //put last element in first node
        arr[1] = arr[size];
        //delete last node
        size--;
        //propagate root node to its correct place
        int i=1;
        while(i < size){
            int leftchild = 2*i;
            int rightchild = 2*i +1;
            if(leftchild < size && arr[leftchild] > arr[i]){
                swap(arr[leftchild],arr[i]);
                i = leftchild;
            }
            else if(rightchild < size && arr[rightchild] > arr[i]){
                swap(arr[rightchild],arr[i]);
                i = rightchild;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    
    
};

void heapify(int index,int arr[],int n){
    if(index ==0) return;
    int curr = index;
    int left = 2*curr;
    int right = 2*curr + 1;
    if(left <= n && arr[curr] < arr[left]){
        curr = left;
    }
    if(right <=n && arr[curr] < arr[right]){
        curr = right;
    }
    if(curr != index){
        swap(arr[index],arr[curr]);
        heapify(curr,arr,n);
    }
}
void heapsort(int arr[],int n){
    int size = n;
    while(size >1){
        //swap root node to last node and size--
        swap(arr[1],arr[size]);
        size--;

        //heapify curr root
        heapify(1,arr,size);
    }
}
int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    //h.print();
    h.deletefromheap();
    //h.print();

    int arr[6] = {-1,54,52,55,53,50};
    for(int i=5/2; i>=0; i--){
        heapify(i,arr,5);
    }
    for(int i=1; i<=5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapsort(arr,5);
    for(int i=1; i<=5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;

}