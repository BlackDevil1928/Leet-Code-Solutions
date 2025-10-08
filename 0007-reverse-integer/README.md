<h2>
  <a href="https://leetcode.com/problems/reverse-integer">
    Reverse Integer
  </a>
</h2>

<img src='https://img.shields.io/badge/Difficulty-Medium-yellow'
     alt='Difficulty: Medium' />
<hr>

<p>
  Given a signed 32-bit integer <code>x</code>,<br>
  return <em><code>x</code> with its digits reversed</em>.<br>
  If reversing <code>x</code> causes the value to go outside<br>
  the signed 32-bit integer range <code>[-2<sup>31</sup>, 2<sup>31</sup> - 1]</code>,<br>
  then return <code>0</code>.
</p>

<p>
  <strong>
    Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
  </strong>
</p>

<br>

<!-- Example 1 -->
<p><strong class="example">Example 1:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">x = 123</span></p>
  <p><strong>Output:</strong> <span class="example-io">321</span></p>
  <p><strong>Explanation:</strong> 123 reversed becomes 321.</p>
</div>

<!-- Example 2 -->
<p><strong class="example">Example 2:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">x = -123</span></p>
  <p><strong>Output:</strong> <span class="example-io">-321</span></p>
  <p><strong>Explanation:</strong> -123 reversed becomes -321.</p>
</div>

<!-- Example 3 -->
<p><strong class="example">Example 3:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">x = 120</span></p>
  <p><strong>Output:</strong> <span class="example-io">21</span></p>
  <p><strong>Explanation:</strong> 120 reversed becomes 21 (no leading zeros).</p>
</div>

<!-- Example 4 -->
<p><strong class="example">Example 4:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">x = 0</span></p>
  <p><strong>Output:</strong> <span class="example-io">0</span></p>
</div>
<br>

<p><strong>Constraints:</strong></p>
<ul>
  <li>
    <code>-2<sup>31</sup> &lt;= x &lt;= 2<sup>31</sup> - 1</code>
  </li>
</ul>
<br>

<strong>Follow up:</strong>
How would you handle overflow without converting the integer to a string?
