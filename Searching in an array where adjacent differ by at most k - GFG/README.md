# Searching in an array where adjacent differ by at most k
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A step array is an array of integer where each element has a difference of at most k with its neighbor. Given a key x, we need to find the index value of x&nbsp;if multiple elements exist, return the first occurrence of the key. </span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">â€‹Input :</strong> arr[ ] = {4, 5, 6, 7, 6}, K = 1 
        and X = 6
<strong style="user-select: auto;">Output :</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
In an array arr 6 is present at index 2.
So, return 2.
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">â€‹Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> arr[ ] = {20 40 50}, K = 20 
        and X = 70<strong style="user-select: auto;">
Output :</strong>  -1 </span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong style="user-select: auto;">search()</strong> that takes an array <strong style="user-select: auto;">(arr)</strong>, sizeOfArray <strong style="user-select: auto;">(n)</strong>, an integer value <strong style="user-select: auto;">X</strong>, another integer value <strong style="user-select: auto;">K</strong>, and return an integer displaying the index of the element <strong style="user-select: auto;">X&nbsp;</strong>in the array arr. If the element is not present in the array return <strong style="user-select: auto;">-1</strong>. The driver code takes care of the printing.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ K ≤ 10<sup style="user-select: auto;">2</sup><br style="user-select: auto;">
1 ≤ arr[i], X ≤ 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>