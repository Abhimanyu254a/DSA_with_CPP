class Solution {
public:

  void merge(vector<int>& nums, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        // Temporary arrays to hold the two halves
        vector<int> left_half(n1), right_half(n2);

        // Copy data to temporary arrays left_half[] and right_half[]
        for (int i = 0; i < n1; i++)
            left_half[i] = nums[left + i];
        for (int i = 0; i < n2; i++)
            right_half[i] = nums[mid + 1 + i];

        // Merging the temporary arrays back into nums[]
        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (left_half[i] <= right_half[j]) {
                nums[k] = left_half[i];
                i++;
            } else {
                nums[k] = right_half[j];
                j++;
            }
            k++;
        }

        // Copy the remaining elements of left_half[], if any
        while (i < n1) {
            nums[k] = left_half[i];
            i++;
            k++;
        }

        // Copy the remaining elements of right_half[], if any
        while (j < n2) {
            nums[k] = right_half[j];
            j++;
            k++;
        }
    }

    // Function for merge sort
    void Merge_Sort(vector<int>& nums, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;

            // Recursively sort the first and second halves
            Merge_Sort(nums, left, mid);
            Merge_Sort(nums, mid + 1, right);

            // Merge the sorted halves
            merge(nums, left, mid, right);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        Merge_Sort(nums, 0, nums.size() - 1);
        return nums;
    }

};