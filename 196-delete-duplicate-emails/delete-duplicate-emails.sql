-- Delete rows from the 'person' table where the id is not the minimum id for a given email
-- and the email occurs more than once in the table
DELETE FROM person
WHERE id NOT IN (
    SELECT id
    FROM (
        SELECT MIN(id) id, email
        FROM person
        GROUP BY email
        HAVING COUNT(*) > 1
    )
) AND email IN (
    SELECT email
    FROM person
    GROUP BY email
    HAVING COUNT(*) > 1
);
