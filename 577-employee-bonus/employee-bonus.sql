-- Select the 'name' from the 'Employee' table and 'bonus' from the 'Bonus' table
-- Perform a left join between 'Employee' and 'Bonus' tables on 'empId' column
SELECT e.name, b.bonus
FROM Employee e
LEFT JOIN Bonus b ON e.empId = b.empId
-- Filter the results to include only rows where the bonus is less than 1000 or is null
WHERE IFNULL(b.bonus, 0) < 1000;
-- WHERE b.bonus < 1000 OR b.bonus IS NULL; -- This is an alternative condition with the same effect