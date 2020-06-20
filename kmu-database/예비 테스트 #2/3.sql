SELECT COUNT(*)
FROM (
    SELECT E.ssn
    FROM k_employee E JOIN k_dependent DP ON E.Ssn = DP.Essn
    WHERE DP.Relationship = 'Spouse'
)AS TEMP