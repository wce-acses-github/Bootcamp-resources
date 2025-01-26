#include <iostream>
using namespace std;
class  Cpp_Bootcamp {
public:
    int session_1;
private:
    int session_2;
protected:
    int session_3;
};

int main() {
    Cpp_Bootcamp obj;

    obj.session_1 = 42; // Accessing public member
    obj1.session_2= 5; // Error: private member inaccessible
    obj1.session_3 = 6; // Error: protected member inaccessible
    cout<<obj.session_1<<endl;
    cout<<obj.session_2<<endl;
    cout<<obj.session_3<<endl;
    return 0;
}