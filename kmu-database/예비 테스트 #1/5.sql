SELECT E.Fname, E.Minit, E.Lname, E.Sex, SE.Fname, SE.Minit, SE.Lname, SE.Sex
FROM k_employee E LEFT JOIN k_employee SE ON E.Super_ssn = SE.Ssn
ORDER BY E.Fname