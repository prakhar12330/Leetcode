<h2><a href="https://leetcode.com/problems/split-a-string-in-balanced-strings/">1221. Split a String in Balanced Strings</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;"><strong style="user-select: auto;">Balanced</strong> strings are those that have an equal quantity of <code style="user-select: auto;">'L'</code> and <code style="user-select: auto;">'R'</code> characters.</p>

<p style="user-select: auto;">Given a <strong style="user-select: auto;">balanced</strong> string <code style="user-select: auto;">s</code>, split it in the maximum amount of balanced strings.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the maximum amount of split <strong style="user-select: auto;">balanced</strong> strings</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "RLRRLLRLRL"
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "RLLLLRRRLR"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> s can be split into "RL", "LLLRRR", "LR", each substring contains same number of 'L' and 'R'.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "LLLLRRRR"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> s can be split into "LLLLRRRR".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i]</code> is either <code style="user-select: auto;">'L'</code> or <code style="user-select: auto;">'R'</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> is a <strong style="user-select: auto;">balanced</strong> string.</li>
</ul>
</div>