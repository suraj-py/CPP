#include <iostream>
using namespace std;

namespace ns1{

    int value(){
        return 5;
    }
}

namespace ns2{

    int x = 100;
    int value(){
        return x*2;
    }
}

int main(){

    // Accessing value function from namespace ns1
    cout << ns1::value() << "\n";

    // Accessing value function from namespace ns2
    cout << ns2::value() << "\n";

    /// Accessing x  from namespace ns2 and printing it directly
    cout << ns2::x << "\n";
}
