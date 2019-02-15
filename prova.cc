#include <pngwriter.h>

#include <cmath>
using namespace std;

int main() {
    const int size = 400;
    // create a png variable that denotes a size×size black canvas named "prova.png"
    pngwriter png(size, size, 0, "prova.png");
    for (int x = 0; x < size; x++) {
        int y = size/2 + (size/2-1) * sin(x / double(size) * 4 * M_PI);
        // plot a pixel at x,y coordinates with RGB=1,1,1 (white)
        png.plot(x, y, 1.0, 1.0, 1.0);
    }
    // write the png
    png.close();
}
