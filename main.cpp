#include <iostream>
using std::cout;
using std::endl;

// Using hash table now for unsorted array using hash table or Axulary array
void missingElementUnsortedArray(int A[], int H[], int l, int h, int n){
     for(int i = 0; i < n; i++){
      H[A[i]]++;
     }   
     for(int i = l; i <h; i++){
        if(H[i] == 0){
         cout << "Element missing " << i << endl;
        }
     }

}
// Checking for missing element in an array
void missingElement(int A[], int l, int h, int n){
    int diff = l-0;
    for(int i = 0; i < n; i++){
        if(A[i]-i != diff){
            while(diff < A[i]-i){
                cout << "Element is missing " << i +diff<< endl;
                diff++;
            }
        }
    }
}


int main(){
    int A[] ={6,7,8,9,11,12,15,16,17,18,19,23};
    int size = sizeof(A) / sizeof(int);
    cout << size << endl;
    missingElement(A,6,23, size);
   int B[] ={3,7,4,9,12,6,1,11,2,10, 15};
  int size2 = sizeof(B) / sizeof(int);
  int H[15] = {0};
    cout << "================================" << endl << endl;
    missingElementUnsortedArray(B, H, 1, 15, size2);

 return 0; 
}