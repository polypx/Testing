#include <iostream>


int main()
{
    int x{ 5 };
    int& ref { x };  // get a reference to x
    int* ptr{ &x };       // a pointer to x
    int y{ 6 };
    
    std::cout << x << '\n';  // print the value of variable x
    std::cout << &x << '\n'; // print the memory address of variable x
    std::cout << *(&x) << '\n'; // print the memory address of variable x

    
    std::cout << ptr << '\n'; // print the memory address of variable x
    std::cout << *ptr << '\n'; // dereference, print the value pointed at

    ptr = &y; // // change ptr to point at y
    std::cout << *ptr << '\n'; // print the value pointed at now
    std::cout << ptr << '\n'; // print the memory address of variable y

    *ptr = 7; // The object at the address held by ptr assigned value 6
                // (note that ptr is dereferenced here)

    std::cout << *ptr << '\n'; // print the value pointed at now
    std::cout << ptr << '\n'; // print the memory address of variable y

    ref = *ptr; // whatever value pointed at give to x via ref
    
    std::cout << x;
    std::cout << ref;  // use the reference to print x's value (5)
    std::cout << *ptr << '\n'; // use the pointer to print x's value (5)

    std::cout << typeid(&x).name() << '\n'; // print the type of &x, address is a pointer
    
    return 0;
}
