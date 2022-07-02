#include <pybind11/pybind11.h>

int fibonacci(int n);

PYBIND11_MODULE(sequence_cpp, m) {
    m.def("fibonacci", &fibonacci, R"pbdoc(
        Add two numbers
        Some other explanation about the add function.
    )pbdoc");
}
