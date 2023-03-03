#ifndef VECTOR_H
#define VECTOR_H
#include <string>
#include <ostream>
#include <cstring>
#include <stdexcept>

using namespace std;

const size_t INITIAL_CAPACITY = 10;
const string OUT_OF_RANGE_MESSAGE = "Index provided is out of range";

template <class T>
class Vector{
private:
    size_t filled;
    size_t capacity;
    T * arr = nullptr;
public:
        // constructors and destructor
    Vector(size_t size = INITIAL_CAPACITY) {
        capacity = size;
        size = 0;
        filled = 0;
        arr = NULL;
        arr = new T[capacity];
    }

    Vector(Vector<T>& other) {
        arr = NULL;
        *this = other;
    }

    ~Vector() {
        if (arr != nullptr) {
            delete [] arr;
        }
        arr = nullptr;
    }

        // data access
    const T& operator[] (size_t index) const {
        return operator[](index);
    }

    T& operator[] (size_t index) {
        return arr[index];
    }

    const T& at(size_t index) const {
        return at(index);
    }

    T& at(size_t index) {
        if (index < filled) {
            return arr[index];
        }
        else {
            throw out_of_range(OUT_OF_RANGE_MESSAGE);
        }
    }

        // state functions
    bool empty() const {
        return (filled > 0);
    }

    size_t size() const {
        return filled;
    }

    void resize(size_t new_size) {
        T * arr_new = new T[new_size];
        for (int i = 0; i < new_size; i++) {
            arr_new[i] = arr[i];
        }
        if (new_size < capacity) {
            filled = new_size;
        }
        capacity = new_size;
        if (arr != nullptr) {
            delete [] arr;
        }
        arr = nullptr;
        arr = arr_new;
    }

    string toString() const {
        if (filled <= 0) {
            return "";
        }
        string str = "";
        for (int i = 0; i < filled; i++) {
            string s = to_string(arr[i]);
            if (i == filled - 1) {
                str += s;
            }
            else {
                str += s + " ";
            }
        }
        return str;
    }
    //friend ostream & operator<< (ostream & os, Vector<T> & obj); // not sure if we should include this one
        // adding data
    void push_back(const T& value) {
        if (filled < capacity) {
            arr[filled] = value;
            filled++;
        }
        else {
            resize(capacity + 1);
            arr[filled] = value;
            filled++;
        }
    }
    void insert(size_t index, const T& value) {
        if (index > capacity || index < 0) {
            throw out_of_range(OUT_OF_RANGE_MESSAGE);
        }
        if (filled >= capacity) {
            resize(capacity * 2);
        }
        int idx = index;
        for (int i = filled; i >= idx; i--) {
            arr[i + 1] = arr[i];
        }
        arr[index] = value;
        filled++;
    }

        // removing data
    void pop_back() {
        arr[filled] = 0;
        filled--;
    }

    void erase(size_t index) {
        if (index > filled || index < 0) {
            throw out_of_range(OUT_OF_RANGE_MESSAGE);
        }
        for (int i = index; i < filled; i++) {
            arr[i] = arr[i + 1];
        }
        filled--;
    }

        // bulk change methods
    void swap(Vector<T>& other) {
        size_t tmp_capacity = capacity;
        size_t tmp_filled = filled;
        capacity = other.capacity;
        filled = other.filled;
        other.capacity = tmp_capacity;
        other.filled = tmp_filled;
        T * tmp_ptr = arr;
        arr = other.arr;
        other.arr = tmp_ptr;

    }

    Vector<T>& operator= (const Vector<T>& other) {
        if (arr != nullptr) {
            delete [] arr;
        }
        arr = nullptr;
        capacity = other.capacity;
        filled = other.filled;
        arr = new T[capacity];
        for (int i = 0; i < filled; i++) {
            arr[i] = other.arr[i];
        }
        return *this;
    }

        // comparison operators
    bool operator== (const Vector<T>& other) {
//        if (this != &other) {
//            return false;
//        }
        if (filled != other.filled) {
            return false;
        }
        int size = filled;
        for (int i = 0; i < size; i++) {
            if (arr[i] != other.arr[i]) {
                return false;
            }
        }
        return true;
    }
};

#endif //VECTOR_H