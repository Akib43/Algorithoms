#include<iostream>
using namespace std;

int DiagonalSum(int *arr[], int n){ 
    int sum=0;
    for (int i = 0; i < n; i++) {
        for(int j= 0; j < n;j++){
            cout<<"i = "<<i<<" j = "<<j;
            if(i==j) {
                cout<<" Diagonal Element found "; 
                sum+=arr[i][j];
                cout<<"So, Sum = "<<sum<<endl; 
            }else{
                cout<<" Not diagonal Element.  Sum not changing."<<endl; 
            }
        }
    }
    return sum;
} 

int main(){
    int **arr;
    int n;
    
    cout << "Enter the size of the square matrix: ";
    cin >> n;
    arr = new int*[n];
    for(int i = 0; i < n; ++i) {
        arr[i] = new int[n];
    }
    cout << "Enter the elements of the square matrix:" << endl;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
        cout<<endl;
    }
    cout << "Diagonal sum: " << DiagonalSum(arr, n) << endl;
}
