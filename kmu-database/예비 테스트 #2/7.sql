SELECT E.Fname, E.Minit, E.Lname
FROM k_employee E LEFT JOIN k_dependent DP ON E.Ssn = DP.Essn
WHERE ISNULL(DP.Essn)
ORDER BY E.Fname