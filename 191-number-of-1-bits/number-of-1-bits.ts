function hammingWeight(n: number): number {
    // Convert the number to a binary string
    const binary: string = n.toString(2);
    let count: number = 0;
    // Count the number of '1's in the binary string
    for (let i = 0; i < binary.length; i++) {
        if (binary[i] === "1") {
            count++;
        }
    }
    return count;
}
