SELECT E.Fname, E.Minit, E.Lname, (
    SELECT count(*) 
    FROM k_dependent DP2
    WHERE E.ssn = DP2.Essn
) AS NumOfDependents
FROM k_employee E JOIN k_dependent DP ON E.Ssn = DP.Essn
GROUP BY E.ssn