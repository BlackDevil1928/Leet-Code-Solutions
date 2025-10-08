<h2>
  <a href="https://leetcode.com/problems/search-in-rotated-sorted-array">
    Search in Rotated Sorted Array
  </a>
</h2>

<img src='https://img.shields.io/badge/Difficulty-Medium-yellow' alt='Difficulty: Medium' />
<hr>

<p>
  There is an integer array <code>nums</code> sorted in ascending order (with <strong>distinct</strong> values).
</p>

<p>
  Prior to being passed to your function, <code>nums</code> is <strong>rotated</strong> at an unknown pivot index <code>k</code> 
  (<code>0 &lt;= k &lt; nums.length</code>) such that the resulting array is:
</p>

<p>
  <code>[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]</code> &nbsp;(0-indexed).
</p>

<p>
  For example, <code>[0,1,2,4,5,6,7]</code> might be rotated at pivot index <code>3</code> and become <code>[4,5,6,7,0,1,2]</code>.
</p>

<p>
  Given the array <code>nums</code> <em>after the rotation</em> and an integer <code>target</code>, 
  return <em>the index of</em> <code>target</code> <em>if it is in</em> <code>nums</code>, or <code>-1</code> if it is not in <code>nums</code>.
</p>

<p>
  You must write an algorithm with <strong>O(log n)</strong> runtime complexity.
</p>

<br>

<p><strong class="example">Example 1:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">nums = [4,5,6,7,0,1,2], target = 0</span></p>
  <p><strong>Output:</strong> <span class="example-io">4</span></p>
  <p><strong>Explanation:</strong> 0 is found at index 4.</p>
</div>

<p><strong class="example">Example 2:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">nums = [4,5,6,7,0,1,2], target = 3</span></p>
  <p><strong>Output:</strong> <span class="example-io">-1</span></p>
  <p><strong>Explanation:</strong> 3 is not in the array.</p>
</div>

<p><strong class="example">Example 3:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">nums = [1], target = 0</span></p>
  <p><strong>Output:</strong> <span class="example-io">-1</span></p>
  <p><strong>Explanation:</strong> 0 is not in the array.</p>
</div>

<br>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &lt;= nums.length &lt;= 5000</code></li>
  <li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
  <li>All values of <code>nums</code> are <strong>unique</strong>.</li>
  <li><code>nums</code> is guaranteed to be a rotated sorted array.</li>
  <li><code>-10<sup>4</sup> &lt;= target &lt;= 10<sup>4</sup></code></li>
</ul>
