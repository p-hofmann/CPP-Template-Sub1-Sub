# CPP-Template-Sub1-Sub
[![TraviCI](https://api.travis-ci.com/p-hofmann/CPP-Template-Sub1-Sub.svg?branch=master)](https://travis-ci.com/p-hofmann/CPP-Template-Sub1-Sub)
[![CircleCI](https://circleci.com/gh/p-hofmann/CPP-Template-Sub1-Sub/tree/master.svg?style=svg)](https://circleci.com/gh/p-hofmann/CPP-Template-Sub1-Sub/tree/master)  
A C++ Submodule of 'CPP-Template-Sub1'.
This is part of the [C++ template](https://github.com/p-hofmann/CPP-Template) that deals with the issue of organizing a big project.
In addition to that it also includes ways to deal with different operation systems or even architecture.  
It includes unittests using [Catch2](https://github.com/catchorg/Catch2).
The [Catch2](https://github.com/catchorg/Catch2) source is not included in this repository as expected, but is cloned from the remote repository when the project is build.  
Continuous integration using [Travis CI](https://travis-ci.com/) is supported. The Code is there tested on Linux, Darwin and Windows OS.
[Circle CI](https://circleci.com/) is supported, but the Code is tested on Linux only. for now.

├── CMakeLists.txt  
├── .travis.yml  
├── .circleci  
│&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└── config.yml  
├── include  
│&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└── project.h  
├── src  
│&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;├── project_LINUX.cpp  
│&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;├── project_DARWIN.cpp  
│&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└── project_WIN32.cpp  
├── external  
│&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└── catch2  
│&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└── catch.hpp  
└── tests  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;├── CMakeLists.txt  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;├── main.cpp  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└── string_utils.test.cpp  

* .travis.yml - Configuration file for [Travis CI](https://travis-ci.com/) support.
* .circleci/config.yml - Configuration file for [Circle CI](https://circleci.com/) support.
* include - Header of current module
* src - Source files of current module
* external - External projects that are not developed as part of this project.
* tests - Unittest files of current module

The 'include' folder does not contain sub-folders, as this repository represents a mini module.
