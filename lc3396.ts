function minimumOperations(nums: number[]): number {
    const numSet = new Set<number>();
    for (let i = nums.length - 1; i >= 0; i--) {
        if (numSet.has(nums[i])) {
            return Math.ceil((i + 1) / 3);
        } else {
            numSet.add(nums[i]);
        }
    }
    return 0;
}

console.log(minimumOperations([5, 5]));
