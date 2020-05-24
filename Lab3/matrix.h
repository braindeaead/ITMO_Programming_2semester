#pragma once

class matrix {
    private:
        float _array[3][3];

    public:
    matrix (float arr[3][3] = {});

    friend matrix operator * (matrix&, matrix&);

    friend matrix operator * (matrix&, float);

    friend matrix operator + (matrix&, matrix&);

    friend matrix operator - (matrix&, matrix&);

    friend bool operator == (matrix&, matrix&);

    friend bool operator != (matrix&, matrix&);

    friend bool operator > (matrix&, matrix&);

    friend bool operator < (matrix&, matrix&);

    static void printMatrix(matrix&);
};
