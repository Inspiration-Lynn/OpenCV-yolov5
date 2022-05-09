#include "yolo.h"

int main() {
    // string imgpath = "../images/bus.jpg";
    string imgpath = "./images/bus.jpg";
    Mat result = detect(imgpath);
    // cv::imwrite("../result.jpg", result);
    cv::imwrite("./result.jpg", result);
    return 0;
}