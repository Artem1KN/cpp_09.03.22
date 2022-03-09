#include <iostream>
using namespace std;

class domino {
public:
    int leftdom;
    int rigthdom;

    void put(domino d, int place, domino& left, domino& rigth) {
        if (place == 0) {
            if (d.rigthdom == left.leftdom) {
                left.rigthdom = d.rigthdom;
                left.leftdom = d.leftdom;
            }
            else {
                left.rigthdom = d.leftdom;
                left.leftdom = d.rigthdom;
            }
        }
        else {
            if (d.leftdom == rigth.rigthdom) {
                rigth.rigthdom = d.rigthdom;
                rigth.leftdom = d.leftdom;
            }
            else {
                rigth.rigthdom = d.leftdom;
                rigth.leftdom = d.rigthdom;
            }
        }
    }
}
