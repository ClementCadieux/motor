#ifndef Grid
#define Grid

using namespace std;

class Grid {
private:
    int height;
    int width;

public:
    // Getter for height
    int getHeight() const {
        return height;
    }

    // Setter for height
    void setHeight(int h) {
        height = h;
    }

    // Getter for width
    int getWidth() const {
        return width;
    }

    // Setter for width
    void setWidth(int w) {
        width = w;
    }
};


#endif // Grid