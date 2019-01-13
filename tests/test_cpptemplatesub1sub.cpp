/**
 * Created by Peter Hofmann on 07.01.19.
 */

#define CATCH_CONFIG_MAIN  // Tells Catch to provide a main()

#include <string>
#include "catch.hpp"
#include "cpptemplatesub1sub.h"

using namespace SubModule1;

/*!
 * Testing default toString()
 */
TEST_CASE("Test default toString", "[TemplateSubmodule1Submodule]")
{
    CppTemplateSub1Sub module;
    std::string tmp1 = module.toString();
    REQUIRE(tmp1.size() > 0);
    REQUIRE(module.getClassName() == "CppTemplateSub1Sub");
}

/*!
 * Testing toString(std::string *string_variable)
 */
TEST_CASE("Test passing argument to toString", "[TemplateSubmodule1Submodule]")
{
    CppTemplateSub1Sub module;
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
    CppTemplateSub1Sub module;
    module.print(); //TODO: Need stdout buffer to test this one
}

/*!
 * Testing constructor and getClassName()
 */
TEST_CASE("Test getClassName()", "[NamedClass]")
{
    std::string className = "Test";
    NamedClass module(className);
    REQUIRE(module.getClassName() == className);
    std::string tmp = module.getClassName();
    tmp = "";
}