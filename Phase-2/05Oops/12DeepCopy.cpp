#include <iostream>
using namespace std;
class box {
    private:
    int length;
    int * breadth;
    int height;
    public:
    box() {
            breadth = new int;
    }
    void set_values(int a, int b,
        int c) {
        length = a;
        * breadth = b;
        height = c;
    }
    void show_data() {
        cout << "Length = " << length << endl <<
            "Breadth = " << breadth << endl <<
            "Height = " << height <<
            endl;
    }
    /* Parameterized Constructors for 
for implementing deep copy */
    box(box & sample) {
            length = sample.length;
            breadth = new int;
            * breadth = * (sample.breadth);
            height = sample.height;
        }
        ~box() {
            delete breadth;
        }
};
int main() {
    box B1;
    // Set the dimensions of box B1
    B1.set_values(5, 10, 15);
    B1.show_data();
    /* When the data will be copied, then all the resources will also get 
     allocated to the new object */
    box B2 = B1;
    // Display the dimensions 
    B2.show_data();
    return 0;
}