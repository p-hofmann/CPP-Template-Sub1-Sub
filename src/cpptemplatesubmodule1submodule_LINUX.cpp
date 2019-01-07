//
// Created by Peter Hofmann on 07.01.19.
//

#include <iostream>
#include "cpptemplatesubmodule1submodule.h"

using namespace SubModule1;

/**
 * This method generates a string representing the class
 * The OS specificity here is silly, but imagine instead a method like getCWD()
 * @return - String representing the class
 */
std::string CPPTemplateSubmodule1Submodule::toString()
{
    _os = LINUX;
    return "[" + getClassName() + "] OS: " + _osToString() + ", ARCH: " + std::to_string(_build_arch);
}
