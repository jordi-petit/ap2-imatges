#include <pngwriter.h>

#include <cmath>
using namespace std;

int main() {
    const int size = 400;
    pngwriter png(size, size, 0, "prova.png");
    for (int x = 0; x < size; x++) {
        int y = size/2 + (size/2-1) * sin(x / double(size) * 4 * M_PI);
        png.plot(x, y, 1.0, 1.0, 1.0);
    }
    png.close();
}
