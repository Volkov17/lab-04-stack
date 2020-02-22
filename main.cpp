#include <iostream>
#include "stack.h"
#include "stack2.h"

int main() {
    using std::cout;
    using std::cin;

    Stack <int> *stackSymbol = new Stack <int> ;
    int ct = 0;
    int ch;

    while (ct++ < 5)
    {
        cin >> ch;
        stackSymbol->push(ch); // помещаем элементы в стек
    }

    cout << std::endl;

    cout<<    stackSymbol->head() <<std::endl;
    stackSymbol -> pop();
    cout<<    stackSymbol->head() <<std::endl;


    Stack <int> *stackSymbol1 = new Stack <int> ;
    stackSymbol1->push(5);
    cout<<    stackSymbol1->head() <<std::endl;


    Stack1 <int> *stackSymbol2 = new Stack1 <int> ;


    stackSymbol2->push_emplace(9); // помещаем элементы в стек
    stackSymbol2->push_emplace(8);
    stackSymbol2->push_emplace(7);

    stackSymbol2->pop_1();
    cout<<    stackSymbol2->head_1() <<std::endl;


    cout << "gg" <<std::endl;

    cout<<    stackSymbol2->head_1() << std::endl;


    Stack1 <int> *stackSymbol3 = new Stack1 <int> ;
    stackSymbol3->push_emplace(5);
    cout<<    stackSymbol3->head_1() <<std::endl;

    Stack1 <int> *stackSymbol4 = new Stack1 <int> ;
    //stackSymbol4 ->push_emplace(stackSymbol3,stackSymbol2);


    class U {
        int a;
        int b;
        int c;
    public:
        U(int aNew = 0, int bNew = 0, int cNew = 0)
                : a(aNew),
                  b(bNew),
                  c(cNew)

        {}
    };



    Stack1 < U > s4;
    s4.push_emplace(4,6,8);

   // cout <<   s4  <<std::endl;




    //   cout << "\n\nУдалим элемент из стека\n";
 //   stackSymbol->pop();



    //Stack<int> newStack(stackSymbol);

   // cout << "\n\nСработал конструктор копирования!\n";
  //  newStack.printStack();

    //cout << "Второй в очереди элемент: "<< newStack.Peek(2) << std::endl;

    return 0;
