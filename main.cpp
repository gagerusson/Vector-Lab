#include <iostream>
#include <vector>
#include "Vector.h"

using namespace std;

int main() {
//    cout << "Part 1" << endl; //Part 1
//    int capacity = 10;
//    Vector<int> v(capacity);
//    v.push_back(4);
//    v.push_back(9);
//    v.push_back(2);
//    v.push_back(99);
//    v.push_back(23);
//    cout << v.toString() << endl;
//
//    cout << "\nPart 2" << endl; //Part 2
//    cout << v.size() << ", " << v.empty() << endl;
//    v.pop_back();
//    v.pop_back();
//    cout << v.toString() << endl;
//    Vector<int> e(5);
//    cout << e.empty() << endl;
//
//    cout << "\nPart 3" << endl; //Part 3
//    cout << v[1] << ", " << v.at(1) << endl;
//    //cout << v.at(14) << endl;
//
//    cout << "\nPart 4" << endl; //Part 4
//    Vector<int> v2(3);
//    v2.push_back(1);
//    v2.push_back(2);
//    v2.push_back(3);
//    cout << v2.toString() << endl;
//    v2.push_back(4);
//    cout << v2.toString() << endl;
//    v2.push_back(5);
//    cout << v2.toString() << endl;
//    v2.push_back(6);
//    cout << v2.toString() << endl;
//
//    cout << "\nPart 5" << endl; //Part 5
//    v2.insert(4, 99);
//    v2.insert(1, 8);
//    cout << v2.toString() << endl;
//    v2.insert(0, 44);
//    v2.insert(9, 55);
//    cout << v2.toString() << endl;
//    //v2.insert(50, 1);
//
//    cout << "\nPart 6" << endl; //Part 6
//    v2.erase(4);
//    cout << v2.toString() << endl;
//    //v2.erase(15);
//
//    cout << "\nPart 7" << endl; //Part 7
//    Vector<int> v3(5);
//    v3 = v2;
//    cout << v3.toString() << endl;
//
//    cout << "\nPart 8" << endl; //Part 8
//    Vector<int> one(3);
//    one.push_back(1);
//    one.push_back(1);
//    one.push_back(1);
//    Vector<int> two(3);
//    two.push_back(2);
//    two.push_back(2);
//    two.push_back(2);
//    cout << "Before Swap: " << one.toString() << " | " << two.toString() << endl;
//    one.swap(two);
//    cout << "After Swap: " << one.toString() << " | " << two.toString() << endl;
//
//    cout << "\nPart 9" << endl; //Part 9
//    Vector<int> A(3);
//    A.push_back(4);
//    A.push_back(8);
//    A.push_back(12);
//    Vector<int> B(10);
//    B.push_back(4);
//    B.push_back(8);
//    B.push_back(12);
//    cout << A.toString() << " | " << B.toString() << endl;
//    cout << (A == B) << endl;
//    if (A == B) {
//        cout << "The vectors are equal" << endl;
//    }
//    else {
//        cout << "The vectors are not equal" << endl;
//    }
//
//    cout << B.toString() << "|" << endl;
//    B.erase(6);
    Vector<int> v(10);
    v.push_back(1);
    v.push_back(2);
    Vector<int> * v2 = new Vector<int>;
    v2->push_back(1);
    delete v2;
    Vector<int> v3(v);
    //v2 = v;
}
