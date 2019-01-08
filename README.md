# CPP-Template-Sub1-Sub
A C++ Submodule of 'CPP-Template-Sub1'.
This is part of the [C++ template](https://github.com/p-hofmann/CPP-Template) that deals with the issue of organizing a big project.
In addition to that it also includes ways to deal with different operation systems or even architecture.
And lastly it includes unittests using [Catch2](https://github.com/catchorg/Catch2).
The [Catch2](https://github.com/catchorg/Catch2) source is not in the 'external' folder as expected, but is cloned from the repository by cmake.
  
TODO: Continuous integration

├── CMakeLists.txt  
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

