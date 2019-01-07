# CPlusPlus-Template-Submodule1-Submodule
A C++ Submodule of 'CPlusPlus-Template-Submodule1' of 'Template C++'  
This is part of a [C++ template](https://github.com/p-hofmann/CPlusPlus-Template) that deals with the issue of organizing a big project.
In addition to that it also includes ways to deal with different operation systems or even architecture.
And lastly, it includes unittests using [Catch2](https://github.com/catchorg/Catch2).  
TODO: Continuous integration

├── CMakeLists.txt  
├── include  
│&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;├── project.h  
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

