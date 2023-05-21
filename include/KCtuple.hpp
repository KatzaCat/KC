#ifndef KCTUPLE
#define KCTUPLE

namespace kc {

    /**
     * a Tuple of size 2, for basic and small storage
    */
    template <typename T, typename U>
    struct Tuple {
        /**
         * constructs the tuple
         * 
         * \param e1 the first element to insert into the tuple
         * \param e2 the second element to insert into the tuple
        */
        inline Tuple(T e1, U e2) {
            this->e1 = e1;
            this->e2 = e2;
        }

        /**
         * sets the first element of a tuple to a value of the specifyed type
         * 
         * \param e the element to insert into the begining of the tuple
        */
        inline void sete1(T e) {this->e1 = e;}

        /**
         * sets the second element of a tuple to a value of the specifyed type
         * 
         * \param e the element to insert into the end of the tuple
        */
        inline void sete2(U e) {this->e2 = e;}

        /**
         * retreavs the first element of the tuple
         * 
         * \returns the first element
        */
        inline T gete1() {return this->e1;}

        /**
         * retreavs the second element of the tuple
         * 
         * \returns the second element
        */
        inline U gete2() {return this->e2;}

    private:
        T e1;
        U e2;
    }; 

} // namespace kc

#endif // KCTUPLE