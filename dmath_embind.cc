#include <emscripten.h>
#include <emscripten/bind.h>

using namespace emscripten;

double add(double lhs, double rhs)
{
   return lhs + rhs;
}

double subtract(double lhs, double rhs) {
    return lhs - rhs;
}

double multiply (double lhs, double rhs) {
    return lhs * rhs;
}

EMSCRIPTEN_BINDINGS(dmodule) {
    function("add", &add);
    function("subtract", &subtract);
}