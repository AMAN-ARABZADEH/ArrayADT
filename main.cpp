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
         cout << "Element missing  " << i << endl;
        }
     }
}
// Checking for missing element in an arrayf
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

 
 // Finding duplicate in a array and printing it once
 void duplicateArr(int A[], int n){
       for(int i = 0; i < n; i++){
           if(A[i] == A[i+1]){
            cout << "Duplicate  in list: " << A[i] << endl;
           }
       }
 }

 // Finding duplicate and counting the duplicates
 void countDuplicate(int A[], int n){
  int temp = 0;
  for(int i = 0; i <n; i++){
   if(A[i] == A[i+1]){
    temp = i+1;
    while(A[temp] == A[i]) temp++;
    cout << A[i] << " is appeared " << temp -i << " times." << endl;
    i = temp-1;
   }
  }
 }




 // counting duplicated in two loops

 void duplicateUnsortedEl(int A[], int n){
  int count = 0;
  for(int i = 0; i< n-1; i++){
   count = 1;
   if(A[i] != -1){
    for(int j = i+1; j < n; j++){
        if(A[i] == A[j]){
           count++;
           A[j] = -1;
        } 
    }
   }
    if(count > 1){ 
         cout << A[i] << "  "<< count << endl;
    }
  }
 }

// find a pair with sum k (a+b  = k)

void findPairSum(int A[], int n, int sum){
  for(int i = 0; i < n-1; i++){
      for(int k = i+1; k < n; k++){
          if(A[i] + A[k] == sum){
             cout << A[i]  << " + " << A[k] <<  " Sum is " << sum << endl; 
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

    cout << "=======================================" << endl << endl;
    int C[] ={6,6,7,8,8,9,9,11,12,12,12,15,16,17,18,18,19,23,23};
    int size3 = sizeof(C) / sizeof(int);
    duplicateArr(C, size3);

    cout << "======================================" << endl << endl;
    countDuplicate(C, size3);


    cout << "===============================================" << endl;
    duplicateUnsortedEl(C, size3);
     cout << "====================================================" << endl;

     findPairSum(A, size, 20);

 return 0; 
}