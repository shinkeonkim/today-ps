class Rectangle {
private:
    int height = 0;
    int width = 0;
public:
    Rectangle(int width, int height) {
        this -> width = width;        
        this -> height = height;
    }
    int get_width() const {
        return this -> width;
    }
    int get_height() const {
        return this -> height;
    }

    void set_width(int width) {
        if(0 < width && width <=1000) {
            this -> width = width;
        }
    }

    void set_height(int height) {
        if(0 < height && height <= 2000) {
            this -> height = height;
        }
    }

    int area() const {
        return this -> height * this -> width;
    }

    int perimeter() const {
        return this -> height *2 + this -> width *2;
    }

    bool is_square() const {
        if(this -> width == this -> height) {
            return true;
        }
        return false;
    }

};