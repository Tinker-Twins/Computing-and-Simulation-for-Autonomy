#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std; // Include the "std" namespace

int main() {
    cv::Mat inputImage = cv::imread("img_before.png");
    if (inputImage.empty()) {
        cerr << "Could not open or find the image." << endl;
        return -1;
    }

    cv::Mat outputImage;
    
    // Define bilateral filter parameters
    int diameter = 50;       // Diameter of the pixel neighborhood
    double sigmaColor = 75;  // Filter sigma in the color space
    double sigmaSpace = 75;  // Filter sigma in the coordinate space
    
    // Apply bilateral filter
    cv::bilateralFilter(inputImage, outputImage, diameter, sigmaColor, sigmaSpace);

    // Save the filtered image
    cv::imwrite("img_after.png", outputImage);

    // Display the input and output images side-by-side
    cv::Mat sideBySide(inputImage.rows, inputImage.cols * 2, inputImage.type());
    inputImage.copyTo(sideBySide(cv::Rect(0, 0, inputImage.cols, inputImage.rows)));
    outputImage.copyTo(sideBySide(cv::Rect(inputImage.cols, 0, outputImage.cols, outputImage.rows)));
    
    cv::namedWindow("Input and Output Images", cv::WINDOW_NORMAL);
    cv::imshow("Input and Output Images", sideBySide);
    cv::waitKey(0);

    return 0;
}
