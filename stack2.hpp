//
// Created by Александр Волков on 06.11.18.
//

#ifndef STACK_LAB_STACK2_H
#define STACK_LAB_STACK2_H

#include <iostream>
#include <utility>
#include <type_traits>
#include <vector>


template <typename T>
class Stack1
{
    struct st1 {
        T a_1;
        st1* next_1;
        explicit st1(const T &data): a_1(data){}
        st1 ( T &&data) : a_1(std::move(data)) {}
    };
    st1* header_1;

    void push_1(T&& value){
        st1 *new_st1 = new st1 ();
        new_st1->a_1 = std::move(value);// безусловное приведение аргумента к рвэлью
        new_st1->next_1 = header_1;
        header_1 = new_st1;
    }

public:

    Stack1() :header_1(nullptr)
    {}
    ~Stack1(){
        while ( header_1 ) {
           st1 *new_st1 = header_1;
            header_1 = header_1 -> next_1;
            delete new_st1;
        }
    }

    template <typename ... Args>
    void push_emplace(Args&&... value) {
        st1* new_st1 = new st1 (T(std::forward<Args>(value)...));
        if (header_1) {
            new_st1->next_1 = header_1;
            header_1 = new_st1;
        }
        else {
            header_1 = new_st1;
        }
    }

    const T& head_1() const {
        return header_1 -> a_1;
    }

    void pop_1(){
        // st1 *a = new st1;
        if ( header_1) {
            st1 *new_st1 = header_1;
            //   st1 *a = header_1;
            header_1 = header_1->next_1;
            delete new_st1;
        }
        // return a->a_1;
    }

//
//    friend std::ostream& operator<<(std::ostream& os, const Stack1 & st4 ){
//        os << " " ;
//    }

    //    template <typename ... Args>
//    void push_1 ( T& first , Args&&... value){
//        push_1(first);
//        push_emplace(value...);
//    }


//        st1 *new_st1 = new st1;
//        new_st1 ->next_1 = nullptr;
//        new_st1 ->a_1 = T(std::forward<Args> (value)...);
//        if (header_1) {
//            new_st1->next_1 = header_1;
//            header_1 = new_st1;
//        }
//        else {
//            header_1 = new_st1;
//        }
//    }



      //      while (*ptr) {
      //          push_1(std::move(*ptr));
      //          if (sizeof...(Args) == 0)
       //             break;
       //         ptr++;
        //    }
     //       push_1(std::forward(value...));
     //       st1 *new_st1 = new st1();
     //       for (unsigned int i = 0 ; i < sizeof...(Args) ; ++i) {
     //           new_st1->a_1 = std::move(value...);
    //            new_st1->next_1 = header_1;
    //            header_1 = new_st1;
    //        }
    //    }
//     }

 //   template <typename  ... Args>
 //   void push_emplace(Args&&... value){
 //       std::vector<T> arr;
 //       while ( sizeof...(Args) != 0 ){
 //           arr.push_back(value...);
 //       }


};

#endif //STACK_LAB_STACK2_H
