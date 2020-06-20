SELECT E.Fname, E.Minit, E.Lname
FROM k_employee E JOIN k_employee SE ON E.Super_ssn = SE.ssn
WHERE SE.Fname = 'Franklin' AND SE.Lname = 'Wong'
ORDER BY E.Fname