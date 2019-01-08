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

#include <string>

/*!
 * Same namespace as SubModule 1, since this module will be tha same library later
 * This module is too small to be its own library in this case
 */
namespace SubModule1
{

    /**
     * Class exemplifying how code for different OS can be dealt with
     * Having cpp files for each OS removes the often ugly '#ifdef' that make a code unreadable
     * Issue: What if the OS specificity is required in the header?
     *
     * Most methods are defined in header.
     * This is done, because they are small and this way now implicitly 'inline'.
     */
    class CPPTemplateSub1Sub
    {
    private:
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
         * Integer storing 32 or 64
         */
        static const unsigned short _build_arch = BUILD_ARCH;

        /**
         * Later set to the OS that compiled the code
         */
        OSType _os = UNKNOWN;

        /**
         * Name of the current class, to be played around with when later inherited
         */
        std::string _className = "CPPTemplateSub1Sub";

        /**
         * Return OS as string
         */
        std::string _osToString()
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

    public:
        /**
         * Constructor that passes a name for the class
         */
        CPPTemplateSub1Sub(std::string className) : _className(className) {};

        /**
         * Default Constructor
         */
        CPPTemplateSub1Sub() {};

        /**
         * Get Class Name
         */
        std::string getClassName() { return _className; };

        /**
         * Return Class as string
         */
        std::string toString();

        /**
         * Store class as string into a passed variabe
         */
        void toString(std::string *string_variable)
        {
            *string_variable = toString();
        }

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
