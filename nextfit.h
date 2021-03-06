#ifndef __NEXTFIT_H__
#define __NEXTFIT_H__
#include "mytype.h"

class NextFitPolicy{
    public:
        NextFitPolicy() : compare_count_(0) {}
        void InitList(const std::string& file_name);
        void NextFit();
        void ShowMemory();

    private:
        std::list<Block_t> block_list_;
        std::list<Block_t> allocated_block_list_;
        std::list<Process_t> process_list_;
        std::list<std::string> block_number_;
        int compare_count_;
};

#endif
