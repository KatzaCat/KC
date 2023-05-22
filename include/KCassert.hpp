#ifndef KCASSERT
#define KCASSERT

#include <iostream>
#include <fstream>

#define KC_ASSERT(exp, msg) \
    if (!(exp))             \
        {std::cout << "in " << __FILE__ << " " << __LINE__ << ": " << #exp << "\n\t" << msg << "\n"; exit(-1);}

#define KC_ASSERT_WITHOUT_QUIT(exp, msg) \
    if (!(exp))                          \
        {std::cout << "in " << __FILE__ << " " << __LINE__ << ": " << #exp << "\n\t" << msg << "\n";}

#define KC_ASSERT_TO_FILE(exp, msg)                                                           \
    if (!(exp)) {                                                                             \
        std::ofstream ofs("./ASSERT.txt", std::ios::out);                                     \
        ofs << "in " << __FILE__ << " " << __LINE__ << ": " << #exp << "\n\t" << msg << "\n"; \
        exit(-1);                                                                             \
    }
    
#define KC_ASSERT_TO_FILE_WITHOUT_QUIT(exp, msg)                                              \
    if (!(exp)) {                                                                             \
        std::ofstream ofs("./ASSERT.txt", std::ios::out);                                     \
        ofs << "in " << __FILE__ << " " << __LINE__ << ": " << #exp << "\n\t" << msg << "\n"; \
    }

#endif