#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main() {
    VideoCapture camera(0);
    UMat frame;
    UMat gray;
    UMat blurred;
    UMat lap;
    UMat invlap;

    while (camera.read(frame)) {
        cvtColor(frame, gray, COLOR_BGR2GRAY);
        GaussianBlur(gray, blurred, Size(7, 7), 1);
        Laplacian(blurred, lap, CV_8U, 1, 4);
        subtract(255, lap, invlap);

        imshow("boi", invlap);
        char c = waitKey(10);
        if (c == 'q') break;
    }
}
