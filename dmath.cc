#include <emscripten.h>

extern "C" double EMSCRIPTEN_KEEPALIVE add(double lhs, double rhs)
{
   return lhs + rhs;
}

extern "C" double EMSCRIPTEN_KEEPALIVE subtract(double lhs, double rhs) {
    return lhs - rhs;
}

double multiply (double lhs, double rhs) {
    return lhs * rhs;
}

