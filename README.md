# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1(mac, linux), 3.81(Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

There's an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 

Tips for setting up your environment can be found [here](https://classroom.udacity.com/nanodegrees/nd013/parts/40f38239-66b6-46ec-ae68-03afd8a601c8/modules/0949fca6-b379-42af-a919-ee50aa304e6a/lessons/f758c44c-5e40-4e01-93b5-1a82aa4e044f/concepts/23d376c7-0195-4276-bdf0-e02f1f3c665d)

## The Project
The goal of this project is to be able to control the mechanical systems of a car. Steering is a very important part of being able to drive a car. For people, going in a straight line is very simple. For the most part the steering wheel stays straight, however, cars tend to sway side to side depending on the car and the road. One cannot hold the wheel perfectly straight and expect to go straight for long distances. Correcting this sway needs to happen continuously and slowly. Drunk drivers have trouble with this as they often overcorrect themselves and sway back and forth. For a computer to not be a drunk driver, there needs to be a way to correct the steering angle in such a way that it does not over compensate but does it quickly and accurately. The concept of PID solves this issue.

### What is PID
PID stands for proportional, integral, and derivative. This technique was made for the purpose of modulating control. It is a pretty simple equation that relies on both an error value. A control proportionality constant is computed in order to try to correct this error.

### Effects of Parameters
Each proportional, integral, and derivative has a constant that is found empirically through optimization. For this project, I chose to manually select the parameters to get a better sense of each parameter. To get the best results, one should probably implement an automated tuning of these variables.

#### Proportional

#### Integral

#### Derivative