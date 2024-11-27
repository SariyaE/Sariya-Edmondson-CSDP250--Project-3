// Sariya Edmondson
// CSDP 250
// Dr.Stone
// 11/24/ 24

#include "binarySTree.h"
using namespace std;

int main() {
    const int size = 35; 
    int numbers[size];

    cout<<"Please enter "<< size <<" random numbers (1 to 100): "<<endl;
    for (int i = 0; i < size; ++i) {
        cout<<"Enter number " << (i + 1) << ": ";
        cin>>numbers[i];

        while (numbers[i] < 1 || numbers[i] > 100) {
            cout<<"Invalid, enter a number between 1 and 100: ";
            cin>>numbers[i];
        }
    }

    cout << "You entered the following numbers: ";
    for (int i = 0; i < size; ++i) {
        cout<<numbers[i]<< " ";
    }
    cout<<endl;

    BinarySearchTree bst;
    for (int i = 0; i < size; ++i) {
        bst.insert(numbers[i]);
    }

    cout<<"\nPre-order Traversal: ";
    bst.preOrder();

    cout<<"In-order Traversal: ";
    bst.inOrder();

    cout<<"Post-order Traversal: ";
    bst.postOrder();

    return 0;
}
