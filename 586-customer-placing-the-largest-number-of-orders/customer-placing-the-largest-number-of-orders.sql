-- Select the column 'customer_number' from the 'Orders' table
-- Group the results by 'customer_number'
-- Order the groups by the count of 'customer_number' in each group in descending order
-- Limit the result to 1 row (the customer with the most orders)
SELECT customer_number
FROM Orders
GROUP BY customer_number
ORDER BY COUNT(customer_number) DESC
LIMIT 1;
