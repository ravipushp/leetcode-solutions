class Solution {
    public int smallestDivisor(int[] nums, int t) {

        int low = 1;
        int high = 0;

        // Find the maximum number
        for (int num : nums) {
            high = Math.max(high, num);
        }

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int sum = 0;

            // Calculate sum for this divisor
            for (int i = 0; i < nums.length; i++) {
                sum += (nums[i] + mid - 1) / mid;
            }

            if (sum <= t) {
                // mid works, so try a smaller divisor
                high = mid - 1;
            } else {
                // mid is too small, so increase divisor
                low = mid + 1;
            }
        }

        return low;
    }
}