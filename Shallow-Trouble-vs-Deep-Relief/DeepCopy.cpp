#include <iostream>

using namespace std;

class DeepCopyExample {
public:
    int* data;

    DeepCopyExample(int value) {
        data = new int(value);
        cout << "Constructor called. Allocating memory for data with value: " << *data << endl;
    }

    DeepCopyExample(const DeepCopyExample& other) {
        data = new int(*other.data);
        cout << "Deep copy constructor called. Creating new memory for copied object." << endl;
    }

    ~DeepCopyExample() {
        cout << "Destructor called. Deleting memory with value: " << *data << endl;
        delete data;
    }
};

int main() {
    DeepCopyExample obj1(42);
    DeepCopyExample obj2 = obj1;
    
    cout << "Original object data: " << *obj1.data << endl;
    cout << "Copied object data: " << *obj2.data << endl;

    *obj2.data = 100;
    
    cout << "After modification, original object data: " << *obj1.data << endl;
    cout << "After modification, copied object data: " << *obj2.data << endl;
    
    return 0;
}