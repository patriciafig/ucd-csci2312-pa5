//
//  less_functor.h
//  Created by Patricia Figueroa on 5/4/16.
//
//

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H

#include <string>

namespace CS2312  {             //template less

    template <typename T>
    class less
    {
    public: //return type bool
        bool operator() (const T &a, const T &b) //argument list
        {
            return (a < b);
        }
    };

    template<>
    class less<string> {
    public:
        bool operator()(const string &a, const string &b) {
            return (a < b);
        }
    };

    // a functor class can be a _class template_:
    ///Specialize (char *)

    template <>
    class less <const char *> {
    public:
        bool operator() (const char *a, const char *b)   //[operator argument list]);
        {
            string string_a, string_b;

            string_a = a;
            string_b = b;

            return ( string_a < string_b );
        };
    };
}

#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H






