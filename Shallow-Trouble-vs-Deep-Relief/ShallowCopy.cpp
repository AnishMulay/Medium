#include <iostream>

using namespace std;

class ShallowCopyExample {
public:
    int* data;
    
    ShallowCopyExample(int value) {
        data = new int(value);
        cout << "Constructor called. Allocating memory for data." << endl;
    }
    
    ShallowCopyExample(const ShallowCopyExample& other) {
        data = other.data;
        cout << "Shallow copy constructor called." << endl;
    }

    ~ShallowCopyExample() {
        delete data;
        cout << "Destructor called. Deleting memory." << endl;
    }
};

int main() {
    ShallowCopyExample obj1(42);
    ShallowCopyExample obj2 = obj1;
    
    cout << "Original object data: " << *obj1.data << endl;
    cout << "Copied object data: " << *obj2.data << endl;

    *obj2.data = 100;
    
    cout << "After modification, original object data: " << *obj1.data << endl;
    cout << "After modification, copied object data: " << *obj2.data << endl;
    
    return 0;
}