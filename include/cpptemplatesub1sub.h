//
// Created by Peter Hofmann on 07.01.19.
//

#ifndef CPP_TEMPLATE_SUB1_SUB_CPPTEMPLATESUB1SUB_H
#define CPP_TEMPLATE_SUB1_SUB_CPPTEMPLATESUB1SUB_H

/// BUILD_ARCH_64BIT is set by cmake
#ifdef BUILD_ARCH_64BIT
#define BUILD_ARCH 64
#else
#define BUILD_ARCH 32
#endif

#include <iostream>
#include <string>
#include "namedclass.h"

/*!
 * Same namespace as SubModule 1, since this module will be tha same library later
 * This module is too small to be its own library in this case
 */
namespace SubModule1
{

    /**
     * An enum
     * List of Operating Systems
     */
    enum OSType
    {
        WINDOWS,
        LINUX,
        APPLE,
        UNKNOWN
    };

    /**
     * Class exemplifying how code for different OS can be dealt with
     * Having cpp files for each OS removes the often ugly '#ifdef' that make a code unreadable
     * Issue: What if the OS specificity is required in the header?
     *
     * Most methods are defined in header.
     * This is done, because they are small and this way now implicitly 'inline'.
     */
    class CppTemplateSub1Sub : public NamedClass
    {
    private:
        /**
         * Integer storing 32 or 64
         */
        static const unsigned short _build_arch = BUILD_ARCH;

        /**
         * Later set to the OS that compiled the code
         */
        OSType _os = UNKNOWN;

    public:
        /// inherit toString
        using NamedClass::toString;
        /// inherit constructors

        CppTemplateSub1Sub();
        CppTemplateSub1Sub(const std::string &className);

        ///overwrite
        std::string toString();

        /**
         * Return OS as string
         */
        std::string osAsString()
        {
            switch (_os)
            {
                case WINDOWS:
                    return "WINDOWS";
                case LINUX:
                    return "Linux";
                case APPLE:
                    return "Apple";
                default:
                    return "Unknown";
            };
        }

        OSType getOS() { return _os; };

        /**
         * Print class as string to stdout
         */
        void print()
        {
            std::cout << toString() << std::endl;
        }
    };
}

#endif //CPP_TEMPLATE_SUB1_SUB_CPPTEMPLATESUB1SUB_H
