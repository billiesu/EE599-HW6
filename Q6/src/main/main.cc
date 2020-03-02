
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int input[] = {9,7,5,6,12,2,14,3,10,11};
    int size = sizeof(input) / sizeof(input[0]);
    std::cout << "Former arry:";
    solution.print_array(input, size);
    solution.Partition(input, 2, size);
    std::cout << "After partition for indexs2:";
    solution.print_array(input, size);
    return EXIT_SUCCESS;
}