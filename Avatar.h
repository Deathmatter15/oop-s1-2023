#ifndef ActivePrac4
#define ActivePrac4
#include "GridUnit.h"
    class Avatar: public GridUnit{
        
        public:
        Avatar(int x, int y): GridUnit(x, y, 'A'){};
        void shift (int dx, int dy){
            std::get<0>(coordinates) += dx;
            std::get<1>(coordinates) += dy;
        };

    };
#endif