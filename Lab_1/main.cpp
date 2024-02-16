#include <iostream>
#include <cmath>
#include <cstdlib>

#define PI 3.14159265358979323846
using namespace std;

int main() {
    const int size = 10000000;

#ifdef DOUBLE
    cout << "double" << std::endl;
    double *array = (double*)malloc(size * sizeof(double)); 
#else
    cout << "float" << std::endl;
    float *array = (float*)malloc(size * sizeof(float));
#endif
    for (int i = 0; i < size; ++i){
        double angle = (2 * PI * i) / size;
        array[i] = sin(angle);
    }

    double sum = 0.0;
    for (int i = 0; i < size; ++i)
        sum += array[i];

    cout << "Sum = " << sum << std::endl;
    free(array);

    return 0;
}