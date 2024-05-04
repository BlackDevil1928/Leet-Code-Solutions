public class Solution {
    public int[] NextGreaterElement(int[] n1, int[] n2) {
        int[] ans = new int[n1.Length];

        //Insert every element of n2 in the HashTable
        Dictionary<int, int> hashTable = new();
        for(int i = 0; i < n2.Length; i++)
            hashTable.Add(n2[i], i);

        //For every element of n1, find it's position in n2 and save it in n1
        for(int i = 0; i < n1.Length; i++) 
            n1[i] = hashTable[n1[i]];

        //Use a new array to save all the next greatest elements of n2
        int[] b = new int[n2.Length];
        Array.Fill(b, -1);

        //Use a monotonic stack to find the next greatest elements of n2
        Stack<int> stack = new();
        for(int i = 0; i < n2.Length; i++) {
            while(stack.Count > 0 && n2[i] > n2[stack.Peek()])
                b[stack.Pop()] = n2[i];

            stack.Push(i);
        }
        
        //Put in ans only the next greatest elements that are needed
        for(int i = 0; i < n1.Length; i++)
           ans[i] = b[n1[i]];

        return ans;
    }
}