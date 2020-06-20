SELECT E.Fname, E.Minit, E.Lname, DP.Relationship, DP.Dependent_name
FROM k_employee E LEFT JOIN k_dependent DP ON E.Ssn = DP.Essn
ORDER BY E.Fname, E.Minit, E.Lname