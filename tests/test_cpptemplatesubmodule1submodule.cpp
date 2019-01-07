/**
 * Created by Peter Hofmann on 07.01.19.
 */

#define CATCH_CONFIG_MAIN  // Tells Catch to provide a main()

#include <string>
#include "catch.hpp"
#include "cpptemplatesubmodule1submodule.h"

using namespace SubModule1;

/*!
 * Testing default toString()
 */
TEST_CASE("Test default toString", "[TemplateSubmodule1Submodule]")
{
    CPPTemplateSubmodule1Submodule module;
    std::string tmp1 = module.toString();
    REQUIRE(tmp1.size() > 0);
}

/*!
 * Testing toString(std::string *string_variable)
 */
TEST_CASE("Test passing argument to toString", "[TemplateSubmodule1Submodule]")
{
    CPPTemplateSubmodule1Submodule module;
    std::string tmp1 = module.toString();
    std::string tmp2;
    module.toString(&tmp2);
    REQUIRE(tmp2.size() > 0);
    REQUIRE(tmp1 == tmp2);
}

/*!
 * Testing print()
 */
TEST_CASE("Test print()", "[TemplateSubmodule1Submodule]")
{
    CPPTemplateSubmodule1Submodule module;
    module.print(); //TODO: Need stdout buffer to test this one
}

/*!
 * Testing constructor and getClassName()
 */
TEST_CASE("Test getClassName()", "[TemplateSubmodule1Submodule]")
{
    std::string className = "Test";
    CPPTemplateSubmodule1Submodule module(className);
    REQUIRE(module.getClassName() == className);
}