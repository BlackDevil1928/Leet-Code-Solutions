/* TypeScript */

function minFallingPathSum(matrix: number[][]): number {
    const M: number = matrix.length;
    const N: number = matrix[0].length;

    let prevRow: number[] = [...matrix[0]]; // Initialize with the first row

    for (let r: number = 1; r < M; r++) {
        const currRow: number[] = new Array(N).fill(0);
        for (let c: number = 0; c < N; c++) {
            const curr: number = matrix[r][c];
            const top: number = curr + prevRow[c];
            const topL: number = curr + (prevRow[c - 1] || Infinity);
            const topR: number = curr + (prevRow[c + 1] || Infinity);
            currRow[c] = Math.min(top, topL, topR);
        }
        prevRow = [...currRow]; // Update the previous row with the current row
    }

    return Math.min(...prevRow);
};