use std::rc::Rc;
use std::cell::RefCell;

impl Solution {
    pub fn sorted_array_to_bst(nums: Vec<i32>) -> Option<Rc<RefCell<TreeNode>>> {
        // Recursive function to build the BST
        fn build_bst(nums: &[i32], left: usize, right: usize) -> Option<Rc<RefCell<TreeNode>>> {
            if left > right {
                return None;
            }

            let mid = left + (right - left) / 2; // Calculate the middle index
            let mut node = TreeNode::new(nums[mid]); // Create a new node with the middle value
            node.left = if mid > 0 { build_bst(nums, left, mid - 1) } else { None }; // Recursively build left subtree
            node.right = build_bst(nums, mid + 1, right); // Recursively build right subtree

            Some(Rc::new(RefCell::new(node))) // Return the node wrapped in Rc and RefCell
        }

        if nums.is_empty() {
            None // Return None if the input array is empty
        } else {
            build_bst(&nums, 0, nums.len() - 1) // Build the BST using the recursive function
        }
    }
}
