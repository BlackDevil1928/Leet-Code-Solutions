// Definition for a binary tree node.
// #[derive(Debug, PartialEq, Eq)]
// pub struct TreeNode {
//   pub val: i32,
//   pub left: Option<Rc<RefCell<TreeNode>>>,
//   pub right: Option<Rc<RefCell<TreeNode>>>,
// }
// 
// impl TreeNode {
//   #[inline]
//   pub fn new(val: i32) -> Self {
//     TreeNode {
//       val,
//       left: None,
//       right: None
//     }
//   }
// }
use std::rc::Rc;
use std::cell::RefCell;
impl Solution {

  pub fn pseudo_palindromic_paths (root: Option<Rc<RefCell<TreeNode>>>) -> i32 {
    fn dfs(n: &Option<Rc<RefCell<TreeNode>>>, freq: i32) -> i32 {
      n.as_ref().map_or(0, |n| {
        let n = n.borrow();
        let f = freq ^ (1 << n.val);
        dfs(&n.left, f) + dfs(&n.right, f) + 
          (n.left.is_none() && n.right.is_none() && (f & (f - 1) == 0)) as i32
      })
    }
    dfs(&root, 0)
  }
}