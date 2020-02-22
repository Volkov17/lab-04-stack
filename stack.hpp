//
// Created by Александр Волков on 05.11.18.
//

#ifndef STACK_LAB_STACK_H
#define STACK_LAB_STACK_H

#include <iostream>

template <typename T>
class    Stack {
    struct st {
        T a;
        st *next;
       // st(){};
    };
    st *header;
public:
   // Stack() {
   //     header(nullptr);
   // }

  //  Stack(const Stack& otherStack) {
  //      st *st_new = new st();
  //      st_new->a = otherStack -> a;
  //      st_new->next = otherStack -> next;
  //      header = st_new;
  //  }

    ~Stack(){
        while ( header ) {
            this -> pop();
        }
    }
    void push(T&& value){
        st* st_new = new st();
        st_new -> a = std::move(value) ;
        st_new -> next = header;
        header = st_new;
    }

    void push(const T& value){ // помещение на вершину стека
        st* st_new = new st();
        st_new -> a = value ;
        st_new -> next = header;
        header = st_new;
    }
    void pop() { // удалить элемент из вершины стека
        if (  header ) {
            st *st_new = header;
            header = header ->next;
            delete st_new;
        }
    }

    const T& head() const{
        return header ->a;
    }
};

#endif //STACK_LAB_STACK_H
