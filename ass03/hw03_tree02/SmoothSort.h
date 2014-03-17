#pragma once
#include<vector>
#include<iostream>

#include "Interfaces03.h"

class SmoothSort : public ISmoothSort{
    public:
    std::vector<int> LN;
    std::vector<int> used_LN;
    std::vector<int>  tree_in;
    SmoothSort(){
/*
      LN = { 1, 1, 3, 5, 9, 15, 25, 41, 67, 109,
          177, 287, 465, 753, 1219, 1973, 3193, 5167, 8361, 13529, 21891,
                35421, 57313, 92735, 150049, 242785, 392835, 635621, 1028457,
                      1664079, 2692537, 4356617, 7049155, 11405773, 18454929, 29860703,
                            48315633, 78176337, 126491971, 204668309, 331160281, 535828591,
                                  866988873 // the next number is > 31 bits.
                                    };
    used_LN = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    tree_in = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
*/

    }
    ~SmoothSort(){
    }
    void buildHeap(std::vector<double>& vec);
    void sort(std::vector<double>& vec);
    int merge(std::vector<double>& vec, int head);
    void fix_down(std::vector<double>& vec, int head, int n);
    void selection_sort( std::vector<double>& vec, int head);

};
