#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    std::cout << "readImg" << std::endl;
    cv::Mat image = cv::imread("../img.jpeg");
    std::cout<<" image.cols(宽度) "<< image.cols << std::endl;
    std::cout<<" image.rows(高度) "<< image.rows << std::endl;
    std::cout<<" image.channels()(通道) "<< image.channels() << std::endl;
    std::cout<<" image.dims(维度) "<< image.dims << std::endl;
    std::cout<<" image.type()(类型) "<< image.type() << std::endl;
    std::cout<<" image.depth() "<< image.depth() << std::endl;

    cv::namedWindow("image");
    cv::imshow("image",image);
    cv::waitKey(0);

    return 0;
}
