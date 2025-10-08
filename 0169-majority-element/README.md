<h2>
  <a href="https://leetcode.com/problems/majority-element">
    Majority Element
  </a>
</h2>

<img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' />
<hr>

<p>
  Given an array <code>nums</code> of size <code>n</code>,<br>
  return <em>the <strong>majority element</strong></em>.
</p>

<p>
  The <strong>majority element</strong> is the element that appears more than <code>⌊n / 2⌋</code> times.<br>
  You may assume that the majority element always exists in the array.
</p>

<br>

<p><strong class="example">Example 1:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">nums = [3,2,3]</span></p>
  <p><strong>Output:</strong> <span class="example-io">3</span></p>
  <p><strong>Explanation:</strong> 3 appears 2 times in an array of length 3.</p>
</div>

<p><strong class="example">Example 2:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">nums = [2,2,1,1,1,2,2]</span></p>
  <p><strong>Output:</strong> <span class="example-io">2</span></p>
  <p><strong>Explanation:</strong> 2 appears 4 times in an array of length 7, which is more than ⌊7/2⌋ = 3.</p>
</div>

<br>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>n == nums.length</code></li>
  <li><code>1 &lt;= n &lt;= 5 * 10<sup>4</sup></code></li>
  <li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>

<br>

<p><strong>Follow up:</strong> Could you solve the problem in linear time <code>O(n)</code> and in <code>O(1)</code> space?</p>
