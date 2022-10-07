#ifndef CONTAINER_H
#define CONTAINER_H

#include <set>

template<class T>
class OrderContainer {
private:
    set<T> st;
    set<T>::iterator iter;
public:
    void mov_head();
    void mov_tail();
    void mov_end();

    void forward();
    void next();

    T get_cur();
    T del_cur();
    void insert(T);

    bool is_end();
};

#endif