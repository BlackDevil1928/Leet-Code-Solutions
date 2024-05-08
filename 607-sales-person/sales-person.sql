SELECT sp.name  -- Select the name of the salesperson
FROM SalesPerson sp  -- From the SalesPerson table, alias it as sp
WHERE sp.name NOT IN(  -- Select the names not present in the subquery result
    SELECT sp.name  -- Select the name of the salesperson
    FROM SalesPerson sp  -- From the SalesPerson table, alias it as sp
        LEFT JOIN Orders o ON sp.sales_id = o.sales_id  -- Left join SalesPerson with Orders based on sales_id
        LEFT JOIN Company c ON o.com_id = c.com_id  -- Left join Orders with Company based on com_id
    WHERE c.name = 'Red'  -- Filter the joined table to only include companies with name 'Red'
);
