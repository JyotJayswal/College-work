/*Create a Dynamic Array class with dynamic allocation and a destructor.*/
#include <iostream>
using namespace std;

class DynamicArray {
    private:
        int* arr;
        int size;

    public:
        DynamicArray(int s) {
            size = s;
            arr = new int[size];   

            for(int i = 0; i < size; i++){ 
                arr[i] = 0;
            }
            cout << "DynamicArray constructor called for size :" << size << "\n";
        }

        ~DynamicArray() {
            cout << "DynamicArray destructor called for size " << size << "\n";
            delete[] arr;
        }

        void setElement(int index, int value){
            if (index >= 0 && index < size) {
                arr[index] = value;
            } else {
                cout << "Index out of bounds!" << endl;
            }
        }

        int getElement(int index){
            if (index >= 0 && index < size) {
                return arr[index];
            } else {
                cout << "Index out of bounds!" << endl;
                return -1;
            }
        }
        void displayArray() {
            for (int i = 0; i < size; i++) {
                cout << "Element at index " << i << ": " << arr[i] << endl;
            }
        }
};

int main() {
    cout << "24BCP157 : jyot jayswal\n";

    int size1, size2;

    cout << "Enter size of first array: ";
    cin >> size1;
    DynamicArray arr1(size1);

    cout << "Enter number of elements to set in first array: ";
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++) {
        int index, value;
        cout << "Enter index and value: ";
        cin >> index >> value;
        arr1.setElement(index, value);
    }

    cout << "Enter size of second array: ";
    cin >> size2;
    DynamicArray arr2(size2);

    cout << "Enter number of elements to set in second array: ";
    int n2;
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        int index, value;
        cout << "Enter index and value: ";
        cin >> index >> value;
        arr2.setElement(index, value);
    }

    cout << "\nArray 1:\n";
    arr1.displayArray();

    cout << "\nArray 2:\n";
    arr2.displayArray();
    return 0;
}
