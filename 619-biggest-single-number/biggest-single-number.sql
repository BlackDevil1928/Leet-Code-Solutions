/* 
   This query finds the maximum unique number in the MyNumbers table. 
   It first selects the num column from MyNumbers, 
   groups the numbers by their value, 
   and filters only those numbers that appear exactly once. 
   Finally, it selects the maximum of these unique numbers as 'num'.
*/

SELECT MAX(num) AS num
FROM (
    SELECT num 
    FROM MyNumbers
    GROUP BY num
    HAVING COUNT(num) = 1
) T;
