/** 
 * Author	: @makermatty (maker.matejsuchanek.cz)
 * Date		: 15-6-2020
 */

#ifndef _MM_TEMPLATE_MATH_h
#define _MM_TEMPLATE_MATH_h

#include <inttypes.h>

template <typename T>
T tmap(T x, const T in_min, const T in_max, const T out_min, const T out_max);

template <typename T>
T tabs(const T val);

template <typename T>
T tmax(const T a, const T b, const T c);

//====================================================================

template <typename T>
T tmax(const T a, const T b, const T c)
{
    T max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}

template <typename T>
T tabs(const T val)
{
    return val < 0 ? -val : val;
}

//====================================================================

template <typename T>
T tmap(T x, const T in_min, const T in_max, const T out_min, const T out_max)
{
    if(in_max == in_min){
        return (out_min + out_max) / 2;
    }

    if (x < in_min) {
        x = in_min;
    } else if (x > in_max) {
        x = in_max;
    }

    T result = (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;

    return result;
}

#endif
