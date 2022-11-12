#include <iostream>
using namespace std;
class box {
    private:
    int length;
    int breadth;
    int height;
    public:
    void set_values(int a, int b,
            int c) {
            length = a;
            breadth = b;
            height = c;
    }
    void show_data() {
        cout << "Length = " << length << endl <<
            "Breadth = " << breadth << endl <<
            "Height = " << height <<
            endl;
    }
};
int main() {
    box B1, B3;
    // Set dimensions of Box B1 
    B1.set_values(5, 10, 15);
    B1.show_data();
    /* When copying the data of object at the time of initialization 
     then copy is made through COPY CONSTRUCTOR */
    box B2 = B1;
    B2.show_data();
    /* When copying the data of object after initialization then the 
     copy is done through DEFAULT ASSIGNMENT OPERATOR */
    B3 = B1;
    B3.show_data();
    
    return 0;
}