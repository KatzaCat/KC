#ifndef KCFILE
#define KCFILE

#include <iostream>

#include "KCtype.hpp"

// opens to read
#define FILEMODE_READ   std::ios::in
// opens to write
#define FILEMODE_WRITE  std::ios::out
// opens to append
#define FILEMODE_APPEND std::ios::app

namespace kc
{
    /* 
        file handler used for genaral use
    */
    struct File {
        /**
         * opens the file
         * 
         * \param file the file thats going to be opened
         * \param filemode the mode in which you wanna open the file
         * 
         * \returns exits with error code -1 if fail
        */
        inline File(str file, std::ios::openmode filemode) {
            ofs.open(file.c_str(), filemode);
            ifs.open(file.c_str(), filemode);
            if (!ofs) exit(-1);
            if (!ifs) exit(-1);
            return;
        }

        /**
         * inits the object
        */
        inline File() {}

        /**
         * opens a file for reading, writing, or appending
         * 
         * \param file the file thats going to be opened
         * \param filemode the mode in which you wanna open the file
         * 
         * \returns true if successful or false if unsuccessful
        */
        inline bool open(str file, std::ios::openmode filemode) {
            ofs.open(file.c_str(), filemode);
            ifs.open(file.c_str(), filemode);
            if (!ofs) return false;
            if (!ifs) return false;
            return true;
        }


        /**
         * puts a string to the file
         * 
         * \param text the text you wanna write to the file
         * 
         * \returns true if successful or false if unsuccessful
        */
        inline bool putString(str text) {
            if (!ofs.is_open()) return false;
            ofs << text.c_str();
            return true;
        }

        /**
         * puts a integer to the file
         * 
         * \param num the integer you wanna write to the file
         * 
         * \returns true if successful or false if unsuccessful
        */
        inline bool putInteger(int num) {
            if (!ofs.is_open()) return false;
            ofs << num;
            return true;
        }

        /**
         * puts a decimal to the file
         * 
         * \param dec the decimal you wanna write to the file
         * 
         * \returns true if successful or false if unsuccessful
        */
        inline bool putDecimal(float dec) {
            if (!ofs.is_open()) return false;
            ofs << dec;
            return true;
        }

        /**
         * gits the file and retunrs it as text
         * 
         * \returns a simplified string of the file or NULL on fail
        */
        inline str toString() {
            str rv, temp;
            if (!ifs) return NULL;
            while (ifs.good()) {
                ifs >> temp;
                rv.append(temp);
                rv.append("\n");
            }
            return rv;
        }

        /**
         * closes the file
        */
        inline void close() {
            ofs.close();
            ifs.close();
        }

    private:
        std::ofstream ofs;
        std::ifstream ifs;

    };
} // namespace kc

#endif // KCFILE