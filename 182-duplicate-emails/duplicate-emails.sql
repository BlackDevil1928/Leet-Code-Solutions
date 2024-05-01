-- Select distinct email addresses from the Person table
-- where the email address occurs more than once in the table
SELECT DISTINCT email AS Email
FROM Person
WHERE email IN (
    -- Subquery to find email addresses that occur more than once
    SELECT CASE WHEN COUNT(id) > 1 THEN email END
    FROM Person
    GROUP BY email
);
