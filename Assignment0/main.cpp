#include <cmath>
#include <Eigen/Core>
#include <Eigen/Dense>
#include <iostream>

int main(){
    Eigen::Vector3f P(2, 1, 1);
    Eigen::Matrix3f Rotation, Translation;
    float rad = 45.0f * M_PI / 180.0f;
    Rotation << cos(rad), -sin(rad), 0,
                sin(rad), cos(rad), 0,
                0, 0, 1;
    Translation << 1, 0, 1,
                   0, 1, 2,
                   0, 0, 1;
    std::cout << "Result: \n" << Translation * Rotation * P << std::endl;

    return 0;
}