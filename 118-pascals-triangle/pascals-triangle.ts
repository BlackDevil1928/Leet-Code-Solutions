function generate(numRows: number): number[][] {
    let tab: number[][] = [];

    for (let i = 0; i < numRows; i++) {
        let ligne = new Array<number>();
        ligne.push(1); // Add 1 at the beginning of each row

        for (let j = 1; j < i; j++) {
            // Calculate the value based on the previous row
            ligne.push(tab[i - 1][j - 1] + tab[i - 1][j]);
        }

        if (i > 0) {
            ligne.push(1); // Add 1 at the end of each row except the first row
        }

        tab.push(ligne); // Add the row to the result array
    }

    return tab;
}
