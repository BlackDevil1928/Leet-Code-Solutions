function findRestaurant(list1: string[], list2: string[]): string[] {
    let result: string[] = [];
    let minimumIndex: number = Infinity;

    // Convert list2 to a map for efficient lookups
    const map2: Map<string, number> = new Map();
    list2.forEach((value, index) => {
        map2.set(value, index);
    });

    // Iterate through list1
    for (let i = 0; i < list1.length; i++) {
        const indexOfElementInList2 = map2.get(list1[i]);

        // If the element exists in list2
        if (indexOfElementInList2 !== undefined) {
            const totalIndex = i + indexOfElementInList2;

            // If the total index is the minimum, add the element to the result
            if (totalIndex === minimumIndex) {
                result.push(list1[i]);
            } else if (totalIndex < minimumIndex) { // If the total index is less than the minimum, update the result
                result = [list1[i]];
                minimumIndex = totalIndex;
            }
        }
    }

    return result; // Return the result
}
