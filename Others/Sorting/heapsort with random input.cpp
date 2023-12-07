#include<bits/stdc++.h>

using namespace std;

int Parent(int i){
    return i/2;
}
int left(int i){
    return 2*i+1;
}
int right(int i){
    return 2*i+2;
}
void maxHeapify(int A[],int N,int i){
    int l= left(i);
    int r= right(i);
    int largest=i;
    if(l<N && A[l]>A[largest]){
        largest=l;
    }
    if(r<N && A[r]>A[largest])
        largest=r;
    if(largest!=i){
        swap(A[i],A[largest]);
        maxHeapify(A,N,largest);
    }
}
void buildMaxHeap(int A[],int N){
    for(int i=N/2-1; i>=0;i--){
        maxHeapify(A,N,i);
    }
}
void heapSort(int A[],int N){
    buildMaxHeap(A,N);
    for(int i=N-1;i>=0;i--){
        swap(A[0],A[i]);
        maxHeapify(A,i,0);
    }
}
void printArray(int A[],int N){
    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int N;
    cout<<"Enter the Size of the Array: ";
    cin>>N;
    int A[N];
    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        A[i] = (rand() % 1000);
    }
    cout<<"\nThe Input Array is: \n"<<endl;
    printArray(A,N);

    clock_t start,End;
    start= clock();

    heapSort(A,N);

    End= clock();

    double duration = double(End-start)/double(CLOCKS_PER_SEC);
    cout << "\nTime taken by the program is : " << fixed
         << duration << setprecision(8)<<" Seconds"<<endl;

    cout<<"\n\nThe Sorted array is: \n"<<endl;
    printArray(A,N);
    return 0;
}
