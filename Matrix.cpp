#include "Matrix.h"

using namespace std;


int main() {

    Matrix test(2, 2, 0.0);

    double number = 0;

    bool result = false;
    //cout << result << endl;
    result = test.get(0, 0, number);

    cout << "Test 1" << endl;
    //cout << result << endl;

    if (result == true) {
        //cout << number << endl;
    }

    bool second = false;

    second = test.set(0, 0, 1.0);

    if (second == true) {
        double num = 0.0;
        bool second_result = test.get(0, 0, num);
        if (second_result == true) {
            cout << num << endl;
        }
    }


}

/*	
void Matrix::matrixMaker (num_rows(), num_cols(), fills) {

	double** box = new double*[num_rows()];
	for (int i = 0; i < num_rows(); i++) {
		box[i] = new double[num_cols()];
		for (int j = 0; j < num_cols(); j++) {
			box[i][j] = double(i + 1) / double(j + 1);
		}
	}

}
*/

