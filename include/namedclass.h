/**
 * Created by Peter Hofmann on 13.01.19.
 */

#ifndef CPPTEMPLATESUB1SUB_NAMEDCLASS_H
#define CPPTEMPLATESUB1SUB_NAMEDCLASS_H


namespace SubModule1
{
    class NamedClass
    {
    private:
        /**
         * Name of the current class, to be played around with when later inherited
         */
        std::string _className;

    public:
        /// Contructors
        NamedClass() : _className("NamedClass") {}
        /**
         * Constructor that passes a name for the class
         */
        NamedClass(const std::string &className) : _className(className) {}

        /**
         * Get Class Name
         */
        std::string getClassName() { return _className; };

        /**
         * Return class description as string
         */
        virtual std::string toString() { return getClassName(); };

        /**
         * Store class description as string into a passed variabe
         */
        void toString(std::string *value)
        {
            *value = toString();
        }

    };
}

#endif //CPPTEMPLATESUB1SUB_NAMEDCLASS_H
