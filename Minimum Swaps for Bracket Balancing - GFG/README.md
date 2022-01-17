# Minimum Swaps for Bracket Balancing
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given a string S of 2N characters consisting of N ‘[‘ brackets and N ‘]’ brackets. A string is considered balanced if it can be represented in the for S2[S1] where S1 and S2 are balanced strings. We can make an unbalanced string balanced by swapping <strong style="user-select: auto;">adjacent</strong> characters. Calculate the minimum number of swaps necessary to make a string balanced.<br style="user-select: auto;">
Note - Strings S1 and S2 can be empty.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>  : []][][
<strong style="user-select: auto;">Output</strong> : 2
<strong style="user-select: auto;">Explanation </strong>:
First swap: Position 3 and 4
[][]][
Second swap: Position 5 and 6
[][][]</span>

</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong> : [[][]]
<strong style="user-select: auto;">Output</strong> : 0 
<strong style="user-select: auto;">Explanation</strong>:
String is already balanced.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">minimumNumberOfSwaps()</strong> which takes the string S and return minimum number of operations required to balance the bracket sequence.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Expected Time Complexity: O(N).<br style="user-select: auto;">
Expected Auxiliary Space: O(1).</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1&lt;=|S|&lt;=100000</span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>