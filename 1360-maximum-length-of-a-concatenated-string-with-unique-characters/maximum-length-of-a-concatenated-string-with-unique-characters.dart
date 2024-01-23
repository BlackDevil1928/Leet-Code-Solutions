class Solution {
//isUnique function is  to check if the concatenated string has unique characters. 
  bool isUnique(String s) {
    Set<String> visited = {};
    for (int i = 0; i < s.length; i++) {
      if (visited.contains(s[i])) {
        return false;
      }
      visited.add(s[i]);
    }
    return true;
  }

  int maxLength(List<String> arr) {
// res is intialized with empty string (similar to qn)
    Set<String> res = {""}; 
    int length = 0;

    //iterating through arr
    for (String s in arr) {
        //crnt is for storing unique subsequence for s.
      Set<String> crnt = {};
        //iterating through res(final subsequence set)
      for (String r in res) {
          // newString is formed by concatenating r and s.
        String newString = r + s;
          //check if it has unique subsequence if yes, add to crnt and updating the length (max of length or newString.length).
        if (isUnique(newString)) {
          crnt.add(newString);
          length = length > newString.length ? length : newString.length;
        }
      }
        //adding the crnt to res (final subsequence set)
      res.addAll(crnt);
    }

    return length;
  }
}