class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> output = new LinkedList<List<Integer>>();
        helper(nums,0,output, new LinkedList<Integer>());
        return output;
    }
    public void helper(int[] nums, int start,List<List<Integer>> output,
    List<Integer> list){
        output.add(new LinkedList<Integer>(list));
        for(int i = start; i<nums.length; i++){
            list.add(nums[i]);
            helper(nums,i+1, output, list);
            list.remove(list.size()-1);
        }
    }
}