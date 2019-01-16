//
// Created by Peter Hofmann on 07.01.19.
//

#include <iostream>
#include "cpptemplatesub1sub.h"

using namespace SubModule1;

CppTemplateSub1Sub::CppTemplateSub1Sub() : NamedClass("CppTemplateSub1Sub"), _os(APPLE) {};
/**
 * Constructor setting class Name
 * @param className - Name of class
 */
CppTemplateSub1Sub::CppTemplateSub1Sub(const std::string &className) : NamedClass(className), _os(APPLE) {}

/**
 * This method generates a string representing the class
 * The OS specificity here is silly, but imagine instead a method like getCWD()
 * @return - String representing the class
 */
std::string CppTemplateSub1Sub::toString()
{
    return "[" + getClassName() + "] OS: " + osAsString() + ", ARCH: " + std::to_string(_build_arch);
}
