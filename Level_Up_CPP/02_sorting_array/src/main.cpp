#include <iostream>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_in_ascending_order(int* array, int size)
{
    for(auto i = 0; i < size - 1; i++)
    {
        for(auto j = 0; j < size - 1 - i; j++)
        {
            if(array[j] > array[j+1]) swap(&array[j], &array[j+1]);
        }
    }
}

void sort_in_descending_order(int* array, int size)
{
    for(auto i = 0; i < size -1; i++)
    {
        for(auto j = 0; j < size -1 -i; j++)
        {
            if(array[j] < array[j+1]) swap(&array[j], &array[j+1]);
        }
    }
}

void print_array(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main (int argc, char** argv)
{
    // Give me a array to sort
    int array[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };

    print_array(array, sizeof(array)/sizeof(int));
    sort_in_ascending_order(array, sizeof(array)/sizeof(int));
    print_array(array, sizeof(array)/sizeof(int));

    int array2[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
    print_array(array2, sizeof(array2)/sizeof(int));
    sort_in_descending_order(array2, sizeof(array2)/sizeof(int));
    print_array(array2, sizeof(array2)/sizeof(int));

    return 0;
}
