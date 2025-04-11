function countSymmetricIntegers(low: number, high: number): number {
    let ans = 0;
    for (let num = low; num <= high; num++) {
        const numStr = String(num);
        if (numStr.length % 2) {
            continue;
        } else {
            let sum = 0;
            for (let i = 0; i < numStr.length; i++) {
                if (i < numStr.length / 2) {
                    sum += Number(numStr[i]);
                } else {
                    sum -= Number(numStr[i]);
                }
            }
            if (sum === 0) ans++;
        }
    }
    return ans;
}
