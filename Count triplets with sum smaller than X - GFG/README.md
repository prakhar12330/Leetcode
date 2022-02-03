# Count triplets with sum smaller than X
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr[]</strong> of distinct integers of size <strong style="user-select: auto;">N</strong> and a value <strong style="user-select: auto;">sum</strong>, the task is to find the count of triplets <strong style="user-select: auto;">(i, j, k)</strong>, having <strong style="user-select: auto;">(i&lt;j&lt;k)&nbsp;</strong>with the sum of<strong style="user-select: auto;"> <strong style="user-select: auto;">(arr[i] + arr[j] + arr[k])</strong>&nbsp;</strong>smaller than the given value sum.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong></span></strong><span style="font-size: 18px; user-select: auto;">N = 4, sum = 2
arr[] = {-2, 0, 1, 3}</span><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">
<strong style="user-select: auto;">Output:</strong>  </span></strong><span style="font-size: 18px; user-select: auto;">2</span><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">
<strong style="user-select: auto;">Explanation</strong>: </span></strong><span style="font-size: 18px; user-select: auto;">Below are triplets with 
sum less than 2 (-2, 0, 1) and (-2, 0, 3). </span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong></span></strong><span style="font-size: 18px; user-select: auto;">N = 5, sum = 12
arr[] = {5, 1, 3, 4, 7}</span><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">
<strong style="user-select: auto;">Output:</strong> </span></strong><span style="font-size: 18px; user-select: auto;">4</span><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">
<strong style="user-select: auto;">Explanation</strong>: </span></strong><span style="font-size: 18px; user-select: auto;">Below are triplets with 
sum less than 12 (1, 3, 4), (1, 3, 5), 
(1, 3, 7) and (1, 4, 5).
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong></span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function countTriplets() that take array arr[],&nbsp;integer N&nbsp; and integer&nbsp;sum&nbsp;as parameters and returns the count of triplets.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> </span></strong><span style="font-size: 18px; user-select: auto;">O(N<sup style="user-select: auto;">2</sup>).</span><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:</strong> </span></strong><span style="font-size: 18px; user-select: auto;">O(1).</span></p>

<div style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">3 ≤ N ≤ 10<sup style="user-select: auto;">3</sup></span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">-10<sup style="user-select: auto;">3</sup>&nbsp;≤ arr[i]&nbsp;≤ 10<sup style="user-select: auto;">3</sup></span></div>
 <p style="user-select: auto;"></p>
            </div>