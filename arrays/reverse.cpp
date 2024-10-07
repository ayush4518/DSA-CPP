// #include<iostream>
// using namespace std;
// void reverse(int a[] ,int n)

// {
//     int start=0;
//     int end=n-1;

//     while(start<=end){
//         swap(a[start], a[end]);
//         start++;
//         end--;
//     }
// }
// void printArray(int a[],int count){
//      for (int i = 0; i < count; i++)
//      {
//         cout <<a[i] <<" ";

//      }
//      cout<<endl;
// }


// int main()
// {
//     int a[20]={1,5,7,9,0};
//     int b[10]={3,4,3,6,8,3};

//     reverse(a,5);
//     reverse(b,5);
   
//    printArray(a,5);
//    printArray(b,5);

//  return 0;   
// }


#include<iostream>
using namespace std;

void reverse(int a[], int n) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

void printArray(int a[], int count) {
    for (int i = 0; i < count; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[20] = { 1, 5, 7, 9, 0 };
    int b[10] = { 3, 4, 3, 6, 8, 3 };
    reverse(a, 5);
    reverse(b, 6);  // Pass 5 instead of 6
    printArray(a, 5);
    printArray(b, 6);  // Pass 5 instead of 6
    return 0;
}
