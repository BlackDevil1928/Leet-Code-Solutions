impl Solution 
{
    pub fn max_length(arr: Vec<String>) -> i32 
    {
        let mut max_len: u32 = 0;
        
        // [1] we should first throw away all strings with any 
        //    duplicate characters; strings with all unique  
        //    characters are the subsets of the alphabet, thus, 
        //    can be encoded using binary form 
        let mut unique: Vec<u32> = Vec::new();
        for s in arr
        {
            // here, we set bits for each of encountered letters
            let bin: u32 = s.bytes().map(|c| 1<<(c-b'a')).sum();
            if bin.count_ones() == s.len() as u32 { unique.push(bin); }
        }
        
        // [2] now start with an empty concatenation and iteratively
        //    increase its length by trying to add more strings 
        let mut concat: Vec<u32> = vec![0];
        for u in unique
        {
            for i in 0..concat.len()
            {
                if (concat[i] & u) == 0
                {
                    let cc = concat[i] | u;
                    concat.push(cc);
                    max_len = max_len.max(cc.count_ones());
                }
            }
        }
        
        return max_len as i32;
    }
}