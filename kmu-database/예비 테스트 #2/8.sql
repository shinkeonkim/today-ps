SELECT E.Fname, E.Minit, E.Lname, (
    SELECT COUNT(*) 
    FROM k_dependent DP2
    WHERE E.ssn = DP2.Essn
) AS NumOfDependents
FROM k_employee E JOIN k_dependent DP ON E.Ssn = DP.Essn
WHERE (
    SELECT COUNT(*) 
    FROM k_dependent DP3
    WHERE E.ssn = DP3.Essn AND (DP3.relationship = 'Daughter' OR DP3.relationship = 'Son')
) > 0
GROUP BY E.Fname
ORDER BY E.Fname