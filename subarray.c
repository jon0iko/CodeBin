#include <stdio.h>

void findMaxSubarray(int arr[], int size)
{
    int max_ending_here = arr[0];
    int max_so_far = arr[0];
    int start_index = 0;
    int end_index = 0;
    int temp_start_index = 0;

    for (int i = 1; i < size; i++)
    {
        // Check if continuing the current subarray is better or starting a new subarray
        if (arr[i] > (max_ending_here + arr[i]))
        {
            max_ending_here = arr[i];
            temp_start_index = i;
        }
        else
        {
            max_ending_here += arr[i];
        }

        // Update the maximum sum and subarray indices if necessary
        if (max_ending_here > max_so_far)
        {
            max_so_far = max_ending_here;
            start_index = temp_start_index;
            end_index = i;
        }
    }

    // Print the maximum subarray
    printf("Maximum subarray with maximum sum: ");
    for (int i = start_index; i <= end_index; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    findMaxSubarray(arr, size);

    return 0;
}
