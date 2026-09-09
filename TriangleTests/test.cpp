#include "pch.h"

class Triangle {
private:
    double _side;
    double _height;

public:
    Triangle(double side, double height) {
        _side = side;
        _height = height;
    }

    double calculate_S() const {
        return 0.5 * _side * _height;
    }

    void set_side(double side) {
        _side = side;
    }

    void set_height(double height) {
        _height = height;
    }

    double get_side() const {
        return _side;
    }

    double get_height() const {
        return _height;
    }
};

TEST(TriangleTest, CalculateArea) {
    Triangle t(10, 5);
    double area = t.calculate_S();
    EXPECT_DOUBLE_EQ(area, 25.0);
}
TEST(TriangleTest, Getters) {
    Triangle t(7, 3);
    EXPECT_DOUBLE_EQ(t.get_side(), 7.0);
    EXPECT_DOUBLE_EQ(t.get_height(), 3.0);
}

TEST(TriangleTest, Setters) {
    Triangle t(1, 1);
    t.set_side(8);
    t.set_height(4);
    EXPECT_DOUBLE_EQ(t.get_side(), 8.0);
    EXPECT_DOUBLE_EQ(t.get_height(), 4.0);
}
TEST(TriangleTest, AreaAfterSetters) {
    Triangle t(2, 3);
    t.set_side(10);
    t.set_height(5);
    EXPECT_DOUBLE_EQ(t.calculate_S(), 25.0);
}