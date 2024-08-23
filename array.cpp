#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int A[a];
    for(int i=0;i<a;i++){
        cin>>A[i];
    }

    cout << "Hello, World!" << endl;
    for(int i=0;i<a;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
