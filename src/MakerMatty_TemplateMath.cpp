#include "MakerMatty_TemplateMath.h"

int32_t map_i32(int32_t x, const int32_t in_min, const int32_t in_max, const int32_t out_min, const int32_t out_max)
{
    if (in_max == in_min) {
        return out_min / 2 + out_max / 2;
    }

    int32_t minimum = tmin(in_min, in_max);
    int32_t maximum = tmax(in_min, in_max);

    if (x < minimum) {
        x = minimum;
    } else if (x > maximum) {
        x = maximum;
    }

    int32_t result = (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;

    minimum = tmin(out_min, out_max);
    maximum = tmax(out_min, out_max);

    if (result < minimum) {
        result = minimum;
    } else if (result > maximum) {
        result = maximum;
    }

    return result;
}

int64_t map_i64(int64_t x, const int64_t in_min, const int64_t in_max, const int64_t out_min, const int64_t out_max)
{
    if (in_max == in_min) {
        return out_min / 2 + out_max / 2;
    }

    int64_t minimum = tmin(in_min, in_max);
    int64_t maximum = tmax(in_min, in_max);

    if (x < minimum) {
        x = minimum;
    } else if (x > maximum) {
        x = maximum;
    }

    int64_t result = (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;

    minimum = tmin(out_min, out_max);
    maximum = tmax(out_min, out_max);

    if (result < minimum) {
        result = minimum;
    } else if (result > maximum) {
        result = maximum;
    }

    return result;
}

float map_f32(float x, const float in_min, const float in_max, const float out_min, const float out_max)
{
    if (in_max == in_min) {
        return out_min / 2 + out_max / 2;
    }

    float minimum = tmin(in_min, in_max);
    float maximum = tmax(in_min, in_max);

    if (x < minimum) {
        x = minimum;
    } else if (x > maximum) {
        x = maximum;
    }

    float result = (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;

    minimum = tmin(out_min, out_max);
    maximum = tmax(out_min, out_max);

    if (result < minimum) {
        result = minimum;
    } else if (result > maximum) {
        result = maximum;
    }

    return result;
}

double map_f64(double x, const double in_min, const double in_max, const double out_min, const double out_max)
{
    if (in_max == in_min) {
        return out_min / 2 + out_max / 2;
    }

    double minimum = tmin(in_min, in_max);
    double maximum = tmax(in_min, in_max);

    if (x < minimum) {
        x = minimum;
    } else if (x > maximum) {
        x = maximum;
    }

    double result = (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;

    minimum = tmin(out_min, out_max);
    maximum = tmax(out_min, out_max);

    if (result < minimum) {
        result = minimum;
    } else if (result > maximum) {
        result = maximum;
    }

    return result;
}