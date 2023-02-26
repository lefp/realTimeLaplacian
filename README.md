# realTimeLaplacian

Simple C++/OpenCV program that processes the laptop's camera stream to look vaguely like a drawing.

![cameraFeedTest](https://user-images.githubusercontent.com/70862148/221389075-afaa3de8-f27d-43d4-b285-3a1210fb0ca7.png)


## Building and running

```
mkdir build
cd build
cmake .. . && make
./camera-feed-test
```
use `q` to quit once the program is running.

## Using a different camera

If OpenCV fails to find the camera or you want it to use a different camera, and you're on Linux, try
```
ls /dev | grep video
```
This should output something like
```
video0
video1
video2
```
Then you can modify the `VideoCapture` with each number line until you get the one you want.
