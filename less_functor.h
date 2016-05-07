//
//  less_functor.h
//  PA5
//
//  Created by Patricia Figueroa on 5/4/16.
//
//

#ifndef less_functor_h
#define less_functor_h

#include <string>


using namespace std;

namespace CS2312  {             //class CS2312

    template <typename T>
    class less
    {
    public: //return type bool
        bool operator() (const T &a, const T &b); //argument list
        {
            return (a < b);
        }
    };

// a functor class can be a _class template_:


    template <>
    class less <const char *> {
    public:
        bool operator() (const char *a, const char *b);   //[operator argument list]);
        {
            return (a < b);

        }


    };


