<h2>
  <a href="https://leetcode.com/problems/palindrome-number">
    Palindrome Number
  </a>
</h2>

<img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' 
     alt='Difficulty: Easy' />
<hr>

<p>
  Given an integer <code>x</code>,<br>
  return <code>true</code> <em>if</em> <code>x</code> <em>is a palindrome</em>,<br>
  and <code>false</code> otherwise.
</p>

<p>
  A <strong>palindrome</strong> is a number that reads the same backward as forward.
</p>

<br>

<!-- Example 1 -->
<p><strong class="example">Example 1:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">x = 121</span></p>
  <p><strong>Output:</strong> <span class="example-io">true</span></p>
  <p><strong>Explanation:</strong> 121 reads as 121 from left to right and from right to left.</p>
</div>

<!-- Example 2 -->
<p><strong class="example">Example 2:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">x = -121</span></p>
  <p><strong>Output:</strong> <span class="example-io">false</span></p>
  <p><strong>Explanation:</strong> From left to right, it reads -121. From right to left, it becomes 121-. Therefore, it is not a palindrome.</p>
</div>

<!-- Example 3 -->
<p><strong class="example">Example 3:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">x = 10</span></p>
  <p><strong>Output:</strong> <span class="example-io">false</span></p>
  <p><strong>Explanation:</strong> Reads 01 from right to left. 10 is not the same as 01.</p>
</div>

<!-- Example 4 -->
<p><strong class="example">Example 4:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">x = 0</span></p>
  <p><strong>Output:</strong> <span class="example-io">true</span></p>
  <p><strong>Explanation:</strong> 0 is a palindrome because it reads the same both ways.</p>
</div>

<br>

<p><strong>Constraints:</strong></p>
<ul>
  <li>
    <code>-2<sup>31</sup> &lt;= x &lt;= 2<sup>31</sup> - 1</code>
  </li>
</ul>

<br>

<p><strong>Follow up:</strong> Could you solve it without converting the integer to a string?</p>
