/** 
 * Author	: @makermatty (maker.matejsuchanek.cz)
 * Date		: 15-6-2020
 */

#ifndef _MM_TEMPLATE_MATH_h
#define _MM_TEMPLATE_MATH_h

#include <inttypes.h>

// template <typename T>
// T tmap(T x, const T in_min, const T in_max, const T out_min, const T out_max);
int32_t map_i32(int32_t x, const int32_t in_min, const int32_t in_max, const int32_t out_min, const int32_t out_max);
int32_t map_i64(int32_t x, const int32_t in_min, const int32_t in_max, const int32_t out_min, const int32_t out_max);
float map_f32(float x, const float in_min, const float in_max, const float out_min, const float out_max);
double map_f64(double x, const double in_min, const double in_max, const double out_min, const double out_max);

template <typename T>
T tabs(const T val);

template <typename T>
T tmax(const T a, const T b, const T c);

template <typename T>
T tmax(const T a, const T b);

template <typename T>
T tmin(const T a, const T b);

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
T tmax(const T a, const T b)
{
    T max = a;
    if (b > max)
        max = b;
    return max;
}

template <typename T>
T tmin(const T a, const T b)
{
    T min = a;
    if (b < min)
        min = b;
    return min;
}

template <typename T>
T tabs(const T val)
{
    return val < 0 ? -val : val;
}

//====================================================================

// template <typename T>
// T tmap(T x, const T in_min, const T in_max, const T out_min, const T out_max)
// {
//     if (in_max == in_min) {
//         return out_min / 2 + out_max / 2;
//     }

//     T minimum = tmin(in_min, in_max);
//     T maximum = tmax(in_min, in_max);

//     if (x < minimum) {
//         x = minimum;
//     } else if (x > maximum) {
//         x = maximum;
//     }

//     T result = (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;

//     minimum = tmin(out_min, out_max);
//     maximum = tmax(out_min, out_max);

//     if (result < minimum) {
//         result = minimum;
//     } else if (result > maximum) {
//         result = maximum;
//     }

//     return result;
// }

#endif
