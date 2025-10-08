<h2>
  <a href="https://leetcode.com/problems/maximum-subarray">
    Maximum Subarray
  </a>
</h2>

<img src='https://img.shields.io/badge/Difficulty-Medium-yellow' alt='Difficulty: Medium' />
<hr>

<p>
  Given an integer array <code>nums</code>,<br>
  find the contiguous subarray (containing at least one number)<br>
  which has the largest sum and return <em>its sum</em>.
</p>

<br>

<p><strong class="example">Example 1:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">nums = [-2,1,-3,4,-1,2,1,-5,4]</span></p>
  <p><strong>Output:</strong> <span class="example-io">6</span></p>
  <p><strong>Explanation:</strong> The contiguous subarray [4,-1,2,1] has the largest sum = 6.</p>
</div>

<p><strong class="example">Example 2:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">nums = [1]</span></p>
  <p><strong>Output:</strong> <span class="example-io">1</span></p>
  <p><strong>Explanation:</strong> The array itself has the largest sum = 1.</p>
</div>

<p><strong class="example">Example 3:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">nums = [5,4,-1,7,8]</span></p>
  <p><strong>Output:</strong> <span class="example-io">23</span></p>
  <p><strong>Explanation:</strong> The contiguous subarray [5,4,-1,7,8] has the largest sum = 23.</p>
</div>

<br>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
  <li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>

<br>

<p><strong>Follow up:</strong> If you have already implemented a solution with <code>O(n)</code> time complexity, try using the <strong>divide and conquer</strong> approach.</p>
