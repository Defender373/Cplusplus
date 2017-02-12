#ifndef MATRIX_H_
#define MATRIX_H_

#include <iostream>

using namespace std;

class Matrix {

public:

    Matrix(unsigned int row, unsigned int col, double fill) {
        rows = row;
        cols = col;
        double fills = fill;

        box = new double *[rows];
        for (int i = 0; i < rows; i++) {
            box[i] = new double[cols];
            for (int j = 0; j < cols; j++) {
                box[i][j] = fills;
            }
        }


    }

    //Accessors
    //not const because I will be resizing them for extra credit
    unsigned int num_rows() {
        return rows;
    }

    unsigned int num_cols() {
        return cols;
    }


    bool get(unsigned int row, unsigned int col, double container) {

        if ((row >= 0 && row < rows) && (col >= 0 && col < cols)) {
            container = box[row][col];
            return true;
        }
        return false;
    }

    //Modifiers

    bool set(unsigned int row, unsigned int col, double value) {
        if ((row >= 0 && row < rows) && (col >= 0 && col < cols)) {
            box[row][col] = value;
            return true;
        }
        return false;

    }

private:
    unsigned int rows;
    unsigned int cols;
    //double fills;
    double **box;

};

#endif