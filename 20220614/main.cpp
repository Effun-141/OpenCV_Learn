#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgproc/imgproc.hpp>

int main() {
    std::cout << "readImg" << std::endl;
    cv::Mat image = cv::imread("../img.png");
    std::cout<<" image.cols(宽度) "<< image.cols << std::endl;
    std::cout<<" image.rows(高度) "<< image.rows << std::endl;
    std::cout<<" image.channels()(通道) "<< image.channels() << std::endl;
    std::cout<<" image.dims(维度) "<< image.dims << std::endl;
    std::cout<<" image.type()(类型) "<< image.type() << std::endl;
    std::cout<<" image.depth() "<< image.depth() << std::endl;
    cv::namedWindow("image");
    cv::imshow("image",image);

    cv::Mat gray_image;
    cv::cvtColor(image, gray_image, cv::COLOR_BGR2GRAY);
    imshow("gray_image", gray_image);
    std::cout<<" gray_image.cols(宽度) "<< gray_image.cols << std::endl;
    std::cout<<" gray_image.rows(高度) "<< gray_image.rows << std::endl;
    std::cout<<" gray_image.channels()(通道) "<< gray_image.channels() << std::endl;
    std::cout<<" gray_image.dims(维度) "<< gray_image.dims << std::endl;
    std::cout<<" gray_image.type()(类型) "<< gray_image.type() << std::endl;
    std::cout<<" gray_image.depth() "<< gray_image.depth() << std::endl;

    /* 创建一张单通道图像 */
    cv::Mat img_gray(99,99,CV_8UC1,cv::Scalar(255));
    std::cout<< " img_gray.channels " << img_gray.channels() << std::endl;
    cv::namedWindow("img_gray");
    cv::imshow("img_gray",img_gray);

    /* 创建一张单通道图像，每个像素的颜色随机 */
    cv::Mat img_gray1(300,300,CV_8UC1);
    randu(img_gray1,cv::Scalar::all(0),cv::Scalar::all(255));
    std::cout<< " img_gray1.channels " << img_gray1.channels() << std::endl;
    cv::namedWindow("img_gray1");
    cv::imshow("img_gray1",img_gray1);

    /* 创建一张三通道图像 */
    cv::Mat img_color(99,99,CV_8UC3,cv::Scalar(255,0,0));
    std::cout<< " img_color.channels " << img_color.channels() << std::endl;
    cv::namedWindow("img_color");
    cv::imshow("img_color",img_color);

    /* 创建一张三通道图像，每个像素的颜色随机 */
    cv::Mat img_color1(800,1000,CV_8UC3);
    randu(img_color1,cv::Scalar::all(0),cv::Scalar::all(255));
    std::cout<< " img_color1.channels " << img_color1.channels() << std::endl;
    cv::namedWindow("img_color1");
    cv::imshow("img_color1",img_color1);

    cv::waitKey(0);

    return 0;
}
