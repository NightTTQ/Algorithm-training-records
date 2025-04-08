function canPartition(nums: number[]): boolean {
    const length = nums.length;
    let sum = 0;
    let max = 0;
    for (let i = 0; i < length; i++) {
        sum += nums[i];
        max = Math.max(max, nums[i]);
    }
    if (sum % 2 !== 0) return false;
    const target = sum / 2;
    if (max > target) return false;
    const dp = new Array(target + 1).fill(false);
    dp[0] = true;
    for (let num of nums) {
        for (let j = target; j >= num; j--) {
            dp[j] = dp[j] || dp[j - num];
        }
    }
    return dp[target];
}
